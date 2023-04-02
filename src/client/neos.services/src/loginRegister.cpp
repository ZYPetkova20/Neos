#include "../include/loginRegister.h"

loginRegister::loginRegister()
{
    
}

void loginRegister::reg(string fName, string lName, string email, string password)
{
	handler.registerHandler();
}

void loginRegister::login(string email, string password)
{
	handler.getUsers();
}
