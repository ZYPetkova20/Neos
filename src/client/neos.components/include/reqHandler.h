#pragma once
#include <string>

using std::string;

class ReqHandler
{
public:
	int signUp(string fName, string lName, string email, string pass);
	int login(string email, string pass);
	bool isLogRegValid(string fName, string lName, string email, string pass, string logRegs);
	string getFirstName(int userId);
	string getLastName(int userId);
};