#pragma once
#include "ConnectionController.h"
#include "DataHendler.h"
class DoctorApplication
{
private:
	DataHendler _DH;
	ConnectionController _conConter;
public:
	void Login();

};

