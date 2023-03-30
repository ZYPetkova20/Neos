#pragma once
#include <iostream>
#include <vector>
#include <APIHandler.h>

using std::string;

class loginRegister{
public:
    APIHandler handler;

	std::vector<std::vector<string>> JSONData;
	int rows, cols;
	int index;

	loginRegister();

	void reg(string fName, string lName, string email, string password);
	void login(string email, string password);

	
};