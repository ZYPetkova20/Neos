#include "../include/reqHandler.h"
#include "loginRegister.h"

int ReqHandler::signUp(string fName, string lName, string email, string pass)
{
	loginRegister logReg;
	return logReg.reg(fName, lName, email, pass);
}

int ReqHandler::login(string email, string pass)
{
	loginRegister logReg;
	return logReg.login(email, pass);
}

bool ReqHandler::isLogRegValid(string fName, string lName, string email, string pass, string logRegs)
{
	loginRegister logReg;
	return logReg.isLogRegValid(fName, lName, email, pass, logRegs);
}

string ReqHandler::getFirstName(int userId)
{
	loginRegister logReg;
	return logReg.getfName(userId);
}

string ReqHandler::getLastName(int userId)
{
	loginRegister logReg;
	return logReg.getlName(userId);
}