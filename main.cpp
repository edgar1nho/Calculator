#include "Calculator.h"
#include <iostream>

int main()
{
	Calculator c;
	c.set(2.9,2);
	std::cout << c.add() << ' ' << c.sub() << ' ' << c.mul() << ' ' << c.div() << ' ' << c.modulo() << '\n';
}
