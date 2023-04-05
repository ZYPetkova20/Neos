#include "../include/inputField.h"

using namespace cp;

inputField::inputField(Rectangle _field, string _type, float _fontSize, Color _textColor)
{
    field = _field;
    type = _type;
    fontSize = _fontSize;
    textColor = _textColor;
    font = LoadFontEx("../assets/fonts/Comfortaa-SemiBold.ttf", _type == "email" ? 18 : 22, 0, 0);

    if (type == "num")
        maxChars = 3;
    else
        maxChars = this->type == "email" ? 28 : 18;
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
    char toPass[30] = "";
    if (type == "password")
    {
        for (int i = 0; i < charCount; i++)
            toPass[i] = '*';
        for (int i = charCount; i < 30; i++)
            toPass[i] = '\0';
    }
    DrawTextEx(font, type == "password" ? toPass : input, {field.x, field.y + 4}, fontSize, 4.f, textColor);
    string str(input);
    setResult(str);
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

void inputField::resetField()
{
    for (int i = 0; i < 30; i++)
    {
        input[i] = '\0';
    }
    charCount = 0;
}

bool inputField::isKeyAllowed()
{
    bool keyPressed = false;
    int key = GetKeyPressed();

    if ((key >= 32) && (key <= 126)) keyPressed = true;

    return keyPressed;
}

void inputField::setResult(string str)
{
    result = str;
}

string inputField::getResult()
{
    return result;
}