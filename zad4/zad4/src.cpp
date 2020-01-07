#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	unsigned int N = 0;

	std::cout << "N = ";
	std::cin >> N;

	//поиск простыъ чисел методом решета Ёратосфена 
	//индексы простых чисел имеют значение true в 
	//векторе prime после выполнени€ алгоритма

	std::vector<bool> prime(N + 1, true);
	prime[0] = prime[1] = false;

	for (long long int i = 2; i <= N; ++i)
	{
		if (prime[i])
		{
			if (i * i <= N)
			{
				for (long long int j = i*i; j <= N; j += i)
				{
					prime[j] = false;
				}
			}
		}
	}

	//вывод полученного р€да простых чисел
	for (unsigned int i = 0; i <= N; i++)
	{
		if (prime[i])
		{
			std::cout << i << ", ";
		}
	}

	return 0;
}