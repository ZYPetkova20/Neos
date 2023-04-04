#pragma once
#include <iostream>
#include <vector>
#include "APIHandler.h"

using std::string; // using declarations to avoid excessive namespace specification
using json = nlohmann::json;

class loginRegister {
	string asciiToLower(string str); // Method for changing a string to lower case

public:
	APIHandler handler;

	loginRegister(); // Constructor

	void archive();
	int reg(string fName, string lName, string email, string password); // Method for calling register from data
	int login(string email, string password); // Method for calling login from data
	bool isLogRegValid(string fName, string lName, string email, string password, string logRegs); // Method checking the log/reg input
	string getfName(int userId); // Method for getting the first name from the data
	string getlName(int userId); // Method for getting the last name from the data
};