#pragma once

#include <iostream>

enum class State {

	REGULAR,
	MEDIUM,
	CRITICAL,
	UNDEFINED

};

class Patient
{

private:
	std::string _firstName;
	std::string _lastName;
	std::string _patronymic;
	State _state;

public:

	Patient()
	{
		_state = State::UNDEFINED;
	}

	Patient(const std::string& firstName,
			const std::string& lastName,
			const std::string& patronymic,
			State state
		) : 
		_firstName(firstName),
		_lastName(lastName),
		_patronymic(patronymic),
		_state(state)

	{}

	virtual ~Patient() {}

	std::string GetFirstName() const {
		return _firstName;
	}

	std::string GetLastName() const {
		return _lastName;
	}

	std::string GetPatronymic() const {
		return _patronymic;
	}

	State GetState() const {
		return _state;
	}

			

};

