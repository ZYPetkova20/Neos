#pragma once
#include "../../neos.App/Src/precompile.hpp"
#include "raylib.h"

class loginRegister {
public:
	Texture regV, loginV;

	struct reg{
		string fName;
		string lName;
		string email;
		string password;
	};

	vector<reg> regPage;

	unsigned letterCount;

	Rectangle textBoxes[4] = {
		{100, 305, 340, 45},
		{540, 305, 340, 45},
		{100, 430, 340, 45},
		{540, 430, 340, 45}
	};

	bool mouseOnText;
	int fpsCounter;
	unsigned maxInputChars;

public:
	loginRegister();
	~loginRegister();

	void inputField();
};