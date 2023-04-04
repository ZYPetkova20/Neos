#pragma once
#include <string>

using std::string;

class ReqHandler
{
public:
	void signUp(string fName, string lName, string email, string pass);
	void login(string email, string pass);
	bool isLogRegValid(string fName, string lName, string email, string pass, string logRegs);
};