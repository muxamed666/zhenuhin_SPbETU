#include <iostream>


void posl_a()
{
	int m = 1;
	int v = 4;

	for (int i = 0; i < 50; i++)
	{
		std::cout << m << ", ";
		if (v % 2 == 0) 
		{ 
			m += v; 
		} 
		else 
		{ 
			m -= v; 
		}

		if (v == 0) 
		{ 
			m += 3; 
			v = 4; 
		} 
		else 
		{ 
			v--; 
		}
	}
}


void posl_b()
{
	int m = 1;
	int p = 100;
	int k = 0;

	std::cout << m << ", ";
	m++;

	for (int i = 0; i < 49; i++)
	{
		if (k == m)
		{
			std::cout << m << ", ";
			m++;
			k = 0;
		}
		else
		{
			std::cout << p << ", ";
			p--;
			k++;
		}
	}
}


void posl_c()
{
	int m = 0;
	int k = 0;
	int p = 1;
	

	for (int i = 0; i < 50; i++)
	{
		std::cout << m << ", ";

		if (k == 0)
		{
			m = p * 10;
			k = p;
			p++;
		}
		else
		{
			m++;
			k--;
		}
	}
}

int main(int argc, char** argv)
{
	std::cout << "Posledovatelonsti: " << std::endl << "a) " << std::endl;
	posl_a();

	std::cout << std::endl << std::endl << "b) " << std::endl;
	posl_b();

	std::cout << std::endl << std::endl << "c) " << std::endl;
	posl_c();

	return 0;
}