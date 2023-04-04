#include "../include/reqHandler.h"
#include "loginRegister.h"

void ReqHandler::signUp(string fName, string lName, string email, string pass)
{
	loginRegister logReg;
	logReg.reg(fName, lName, email, pass);
}

void ReqHandler::login(string email, string pass)
{
	loginRegister logReg;
	logReg.login(email, pass);
}

bool ReqHandler::isLogRegValid(string fName, string lName, string email, string pass, string logRegs)
{
	std::cout << "2 " << std::endl;
	loginRegister logReg;
	return logReg.isLogRegValid(fName, lName, email, pass, logRegs);
}