#pragma once
#include <iostream>
#include "Patient.h"
#include "vipPatient.h"
#include "Queue.h"

class PatientRepo
{
private:
	Queue<Patient> _patientQue;

public:

	void AddPatient(Patient& patient)
	{
		if (dynamic_cast<VipPatient*>(&patient) == nullptr) 
		{
			std::cout << "patient Vip" << std::endl;
		}
		else 
		{
			std::cout << "patient normal" << std::endl;
		}
		
		//_patientQue.Push(patient);
	}

	Patient GetPatient() 
	{
		if (!_patientQue.IsEmpty()) 
		{
			return _patientQue.Pop();
		}
		else 
		{
			throw std::out_of_range("Queue Is Empty");
		}
	}
	
};

