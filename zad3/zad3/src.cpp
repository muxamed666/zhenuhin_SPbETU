#include <iostream>
#include <math.h>


/*

Заданная функция f

*/

double f(double a, double w, double t)
{
	return(a * sin(w * t));
}


int main()
{
	double a, w, t, integral;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> w;
	
	t = 0;
	integral = 0;

	while (t < 50)
	{
		//используется формула метода средних прямоугольников
		integral += f(a, w, (t + 0.05)) * 0.1;
		t += 0.1;
	}

	std::cout << integral << std::endl;

	return 0;
}