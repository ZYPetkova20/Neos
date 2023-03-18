#include "../include/loginRegister.h"

loginRegister::loginRegister()
{
	regV = LoadTexture("../../loginRegister/Register.png");
	loginV = LoadTexture("../../loginRegister/Login.png");

	letterCount = 0;
	mouseOnText = false;
	fpsCounter = 0;
	maxInputChars = 15;
}

void keyInput() {

}