#include <iostream>
#include <math.h>

int main(int argc, char** argv)
{
	double b, V, L;
	std::cout << "b = "; std::cin >> b;
	std::cout << "V = "; std::cin >> V;
	std::cout << "L = "; std::cin >> L;

	double Yb;
	double t = 0;
	double Q = 1.0 / 24.0;

	std::cout.precision(5);

	do
	{
		Yb = sqrt(L*L - (b + V*t)*(b + V*t));
		t += Q;

		if (Yb > 0)
			printf("t = %.5lf\t\tYb(t) = %.5lf\n", t, Yb);
		else
			printf("t = %.5lf\t\tYb(t) = %.5lf\n", t, 0);

	} while (Yb > 0);



	return 0;
}