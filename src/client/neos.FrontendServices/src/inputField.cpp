#include "../include/inputField.h"
#include <iostream>

using namespace cp;

inputField::inputField(Rectangle field, string type, float fontSize, Color textColor)
{
    this->field = field;
    this->type = type;
    this->fontSize = fontSize;
    this->textColor = textColor;
    font = LoadFontEx("../assets/fonts/Comfortaa-SemiBold.ttf", this->type == "email" ? 18 : 22, 0, 0);
    maxChars = this->type == "email" ? 24 : 17;

    for (int i = 0; i < 30; i++)
    {
        input[i] = '\0';
    }
}

inputField::~inputField()
{
    UnloadFont(font);
}

void inputField::updateField(Vector2 mousePos)
{
    printInput();
    selectField(mousePos);

    if (!isSelected)
        return;

    handleInput();
}

void inputField::printInput()
{
    DrawTextEx(font, input, { field.x, field.y + 4 }, fontSize, 4.f, textColor);
}

void inputField::handleInput()
{
    int key = GetCharPressed(); // Holds the value of the last key pressed

    if (charCount > maxChars) charCount = maxChars;

    while (key > 0 && charCount < maxChars)
    {
        if (isKeyAllowed())
        {
            input[charCount] = char(key);
            input[charCount + 1] = ' ';
            charCount++;
        }

        key = GetCharPressed();
    }

    if (IsKeyPressed(KEY_BACKSPACE))
    {
        charCount--;
        if (charCount < 0) charCount = 0;
        input[charCount] = ' ';
    }
}

void inputField::selectField(Vector2 mousePos)
{
    if (CheckCollisionPointRec(mousePos, field) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        isSelected = true;
        return;
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        isSelected = false;
}

bool inputField::isKeyAllowed()
{
    bool keyPressed = false;
    int key = GetKeyPressed();

    if ((key >= 32) && (key <= 126)) keyPressed = true;

    return keyPressed;
}

string inputField::getResult()
{
    string str(input);
    return str;
}