#pragma once
#include <string>

class Account 
{
protected:
	const std::string account_number{}; // номер счета - неизменяемый
	float balance{};				// количество денег. отрицательное значение означает долг
};

