#include <iostream>

class Calculator
{
	private:
		double x;
		double y;
	public:
		void set(double x, double y);
		double add();
		double sub();
		double mul();
		double div();
		double modulo();
};
