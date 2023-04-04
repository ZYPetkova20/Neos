#include "../include/loginRegister.h"

loginRegister::loginRegister()
{
}

void loginRegister::archive()
{
	handler.reactions();
}

void loginRegister::reg(string fName, string lName, string email, string password)
{
	handler.registerHandler(fName, lName, email, password);
}

void loginRegister::login(string email, string password)
{
	handler.getUsers();
}

bool loginRegister::isLogRegValid(string fName, string lName, string email, string password, string logRegs)
{
	std::cout << "3 " << std::endl;
	return handler.checkLoginRegister(fName, lName, email, password, logRegs);
}

string loginRegister::getFirstName(string email)
{
	return handler.getFirstName(email);
}