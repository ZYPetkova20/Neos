#pragma once
#include <raylib.h>
#include <string>

using std::string;

namespace cp // namespace for our own-written compounds
{
    class inputField
    {
    private:

        // Variables
        Color textColor; // Color of the text
        Rectangle field; // Position of the input field
        string type; // Type of the input (text, email, password)
        string result = ""; // Result from the fields
        char input[30]; // The text from the field
        float fontSize; // Size of the text
        int charCount = 0; // Counts the inputed symbols
        int maxChars; // Maximum characters in the field
        unsigned animationCounter; // counts frames for the animation
        bool isSelected = false;

        // Fonts
        Font font; // Font to use/display when typing

        // Private Methods
        void selectField(Vector2 mousePos); // checks if the field is selected
        void printInput(); // Displays the text from input
        void handleInput(); // Handles special symbols and other input
        bool isKeyAllowed(); // Checks if the pressed key can be typed

    public:
        inputField(Rectangle field, string type, float fontSize, Color textColor);
        ~inputField();

        // Public Methods
        void updateField(Vector2 mousePos); // Updates the field
        void resetField(); // Resets the input when you exit the scene
        void setResult(string str); // Returns the final result from the field
        string getResult(); // Returns the final result from the field
    };
}