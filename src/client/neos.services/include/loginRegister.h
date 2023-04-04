#pragma once
#include <iostream>
#include <vector>
#include "APIHandler.h"

using std::string; // using declarations to avoid excessive namespace specification
using json = nlohmann::json;

class loginRegister{
public:
    APIHandler handler;

	loginRegister();

	void archive();
	void reg(string fName, string lName, string email, string password);
	void login(string email, string password);
};