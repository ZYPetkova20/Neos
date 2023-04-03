#include "../include/reqHandler.h"
#include "loginRegister.h"

void ReqHandler::login()
{
	loginRegister logReg;
	logReg.login("da", "az");
}