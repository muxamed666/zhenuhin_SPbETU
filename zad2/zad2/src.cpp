#include <iostream>


/*

¬ычисление факториала

*/

long double fact(unsigned int x)
{
	//факториал нул€ равен еденице
	if (x == 0) return 1.0;
	//факториал беретс€ только от положительных чисел 
	if (x < 0) return 0.0; 
	//по определению факториала в виде рекуррентной формулы
	return (x * fact(x - 1));
}


int main(int argc, char** argv)
{
	long double sum = 0.0;

	//сумма членов р€да от 1 до 100
	for (int i = 1; i <= 100; i++)
	{
		sum += i / fact(100 - i);
	}
	
	std::cout << sum << std::endl;
	
	return 0;
}