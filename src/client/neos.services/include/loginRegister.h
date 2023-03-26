#pragma once
#include <iostream>

using std::string;

struct registerDataInput
{
    string fname;
    string lname;
    string email;
    string password;
};



class loginRegister {
public:
	void login(string email, string password);
	void reg(string fName, string lName, string email, string password);
};