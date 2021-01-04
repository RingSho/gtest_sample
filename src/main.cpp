#include <iostream>
#include "calculate/calculate.hpp"

int main()
{
	std::cout << "Hello C++" << std::endl;

	double a = 1.0;
	double b = 2.0;
	Calculate Calc(a, b);

	std::cout << Calc.a << ", " << Calc.b << std::endl;
	std::cout << Calc.Sum(a, b) << std::endl;

	return 0;
}