using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Bibcam.Encoder;

public class ctr : MonoBehaviour
{
    public Button button; // Assign the UI button in the Inspector
    public string newText = "stoprecording"; // Enter the new text you want to display in the Inspector

    public BibcamEncoder e;

    private string originalText;
    private bool isOriginalText = true;
    private int _pressCount = 0;

    void Start()

    {
        button.onClick.AddListener(OnButtonClick);
        // Store the original button text
        Text buttonText = button.GetComponentInChildren<Text>();
        originalText = buttonText.text;
    }

    void OnButtonClick()
    {
        // Toggle the text of the button when it's clicked
        Text buttonText = button.GetComponentInChildren<Text>();

        if (isOriginalText)
        {
            buttonText.text = newText;
        }
        else
        {
            buttonText.text = originalText;
        }

        // Toggle the isOriginalText boolean
        isOriginalText = !isOriginalText;

        _pressCount++;

        if (_pressCount % 2 == 0)
        {
            e.ishsv = (e.ishsv++) % 5;
        }
    }

}
