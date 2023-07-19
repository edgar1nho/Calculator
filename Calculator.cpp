#include "Calculator.h"
	
void Calculator::set(double inputx, double inputy)
{
	x = inputx;
	y = inputy;
}

double Calculator::add()
{
	return x + y;
}

double Calculator::sub()
{
	return x - y;
}

double Calculator::mul()
{
	return x * y;
}

double Calculator::div()
{
	if(y == 0)
	{
		std::cout << "cannot do division because y = 0\n";
	}
	else
	{
		return x / y;
	}
	return 0;
}

double Calculator::modulo()
{
	if(y == 0)
	{
		std::cout << "cannot do modulo because y = 0\n";
	}
	else
	{
		return static_cast<int>(x + 0.5) % static_cast<int>(y + 0.5);
	}	
	return 0;
}
