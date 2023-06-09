using UnityEngine;
using Bibcam.Common;
using UnityEngine.XR.ARFoundation;


namespace Bibcam.Encoder
{

    public sealed class BibcamEncoder : MonoBehaviour
    {
        #region Public accessors

        public float minDepth { get => _minDepth; set => _minDepth = value; }
        public float maxDepth { get => _maxDepth; set => _maxDepth = value; }
        public int ishsv { get => _ishsv; set => _ishsv = value; }
       
        public Texture EncodedTexture => _encoded;
      
        #endregion

        #region Editable attributes

        [SerializeField] BibcamXRDataProvider _xrSource = null;
        [SerializeField] float _minDepth = 0.025f;
        [SerializeField] float _maxDepth = 5;
        [SerializeField] int _ishsv = 0;
        [SerializeField] Transform experienceOrigin;
      
        #endregion

        #region Hidden asset references

        [SerializeField] Shader _shader = null;

        #endregion

        #region Private objects

        Material _material;
        RenderTexture _encoded;
        GraphicsBuffer _metadata;
        Metadata[] _tempArray = new Metadata[1];

        #endregion

        #region MonoBehaviour implementation

      
        void Start()

        {

           
                switch (_ishsv)
                {
                     case 0:
                    _shader = Shader.Find("Hidden/Bibcam/Encoder");
                    break;

                      case 1:
                        _shader = Shader.Find("Hidden/Bibcam/Encoderhsv");
                        break;
                    case 2:
                        _shader = Shader.Find("Hidden/Bibcam/Encoderhsl");
                        break;
                    case 3:
                        _shader = Shader.Find("Hidden/Bibcam/Encoderhcl");
                        break;
                    case 4:
                        _shader = Shader.Find("Hidden/Bibcam/Encoderhcy");
                        break;
                    default:
                        _shader = Shader.Find("Hidden/Bibcam/Encoder");
                        break;
                }
            
            _material = new Material(_shader);
            _encoded = GfxUtil.RGBARenderTexture(1920, 1080);
            _metadata = GfxUtil.StructuredBuffer(20, sizeof(float));
            Application.onBeforeRender += OnBeforeApplicationRender;
        }


        void OnDestroy()
        {
            Destroy(_material);
            Destroy(_encoded);
            _metadata.Dispose();
            Application.onBeforeRender -= OnBeforeApplicationRender;
        }

        #endregion

        #region Application level callback

        //
        // ARPoseDriver updates the camera transform in Application.onBeforeRender,
        // so we have to use it too.
        //
        // The current implementation is not perfect because it's not clear which
        // one is called first. We know that ARPoseDriver uses OnEnable to register
        // its event handler, so theirs might be called first...
        //
        // FIXME: To make the execution order clear, we should call ARPoseDriver.
        // PerformUpdate (private) via C# reflection. That's stil a hackish way to
        // solve the problem, though.
        //

        void OnBeforeApplicationRender()
        {
            var tex = _xrSource.TextureSet; // we get from call back function AROcclusionFrameEventArgs
            if (tex.y == null) return;

            // Texture planes
            _material.SetTexture(ShaderID.TextureY, tex.y);
            _material.SetTexture(ShaderID.TextureCbCr, tex.cbcr);
            _material.SetTexture(ShaderID.EnvironmentDepth, tex.depth);
           // _material.SetTexture(ShaderID.HumanStencil, tex.stencil);

            // Aspect ratio compensation (camera vs. 16:9)
            var aspectFix = 9.0f / 16 * tex.y.width / tex.y.height;
            _material.SetFloat(ShaderID.AspectFix, aspectFix);

            // Projection matrix
            var proj = _xrSource.ProjectionMatrix;
            proj[1, 1] = proj[0, 0] * 16 / 9; // Y-factor overriding (16:9)

            // Depth range
            var range = new Vector2(_minDepth, _maxDepth);
            _material.SetVector(ShaderID.DepthRange, range);

            // Metadata

             long? timestamp = _xrSource.TimestampNs;
           // _tempArray[0] = new Metadata(_xrSource.CameraTransform, proj, range, experienceOrigin, timestamp);
            _tempArray[0] = new Metadata(_xrSource.CameraTransform, proj, range, experienceOrigin,timestamp);
                _metadata.SetData(_tempArray);
                _material.SetBuffer(ShaderID.Metadata, _metadata);
            

            // Encoding and multiplexing
            Graphics.Blit(null, _encoded, _material);
        }

        #endregion
    }

} // namespace Bibcam.Encoder
