#include "../include/loginRegister.h"

loginRegister::loginRegister()
{
}

string loginRegister::asciiToLower(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
	}
	return str;
}

void loginRegister::archive()
{
	handler.reactions();
}

int loginRegister::reg(string fName, string lName, string email, string password)
{
	return handler.registerHandler(fName, lName, email, password);
}

int loginRegister::login(string email, string password)
{
	return handler.loginHandler(email, password);
}

bool loginRegister::isLogRegValid(string fName, string lName, string email, string password, string logRegs)
{
	if (email == "" || password == "")
		return 0;
	if (logRegs == "register" && (fName == "" || lName == ""))
		return 0;

	email = asciiToLower(email);
	std::cout << email << std::endl;
	return handler.checkLoginRegister(fName, lName, email, password, logRegs);
}

string loginRegister::getfName(int userId)
{
	return handler.getFirstName(userId);
}

string loginRegister::getlName(int userId)
{
	return handler.getLastName(userId);
}