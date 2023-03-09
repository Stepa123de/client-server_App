#pragma once
#include "Patient.h"
class VipPatient:public Patient 
{
private:
	int _moneyAmount = 0;

public:

	VipPatient() :Patient(){}

	VipPatient(const std::string& firstName,
		const std::string& lastName,
		const std::string& patronymic,
		State state,
		int moneyAmount):
		_moneyAmount(moneyAmount),
		Patient(firstName,lastName, patronymic,state)
	{

	}

	int GetMoneyAmount()
	{
		return _moneyAmount;
	}


};

