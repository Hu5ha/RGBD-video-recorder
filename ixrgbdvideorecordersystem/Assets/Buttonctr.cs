using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Buttonctr : MonoBehaviour
{
    public Button button; // Assign the UI button in the Inspector
    public string newText = "stoprecording"; // Enter the new text you want to display in the Inspector

    

    private string originalText;
    private bool isOriginalText = true;
    
    private void Start()
    {
        // Store the original button text
        Text buttonText = button.GetComponentInChildren<Text>();
        originalText = buttonText.text;

        // Add a listener to the button, so that when it's clicked, it calls the 'OnButtonClick' method
        button.onClick.AddListener(OnButtonClick);
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
    }
}
