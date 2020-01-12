#include <iostream>
#include <time.h>

#define N 50

//найти число с наибольшим количеством вхождений
//массив на входе должен быть отсортирован
int maxNumOfOccur(int* a)
{
	int current = a[0];
	int currentOccurNum = 1;
	int candidate = a[0];
	int candidateOccurNum = 1;

	for (int i = 1; i < N; i++)
	{
		if (a[i] == current)
		{
			currentOccurNum++;
		}
		else
		{
			current = a[i];
			currentOccurNum = 1;
		}

		if (currentOccurNum >= candidateOccurNum)
		{
			candidate = current;
			candidateOccurNum = currentOccurNum;
		}
	}

	return candidate;
}


//найти сумму чисел, €вл€ющихс€ квадратами каких либо элементов массива
int sumOfSquares(int* a)
{
	int sum = 0;
	int last = 0;

	for (int i = 0; i < N; i++)
	{
		int sq = a[i] * a[i];

		for (int j = 0; j < N; j++)
		{
			if (a[j] == sq && a[i] != a[j] && a[j] != last)
			{
				sum += a[j];
				last = a[j];
				std::cout << a[j] << " is square of " << a[i] << std::endl;
				std::cout << "Sum = " << sum << std::endl;
			}
		}
	}

	return sum;
}

//вывод а в виде таблицы по дес€ткам в отдельных строках
//массив на входе должен быть отсортирован
void outputTable(int* a)
{
	std::cout << a[0] << " ";

	for (int i = 1; i < N; i++)
	{
		if (a[i] / 10 != a[i - 1] / 10)
		{
			std::cout << std::endl;
		}

		std::cout << a[i] << " ";
	}
}


int main(int argc, char** argv)
{
	//объ€вл€ем массив из задани€
	int A[50];

	//заполн€ем его рандомными числами
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 64;
	}

	//выведем
	for (int i = 0; i < N; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl << std::endl;

	//отсортируем массив
	//испольуем сортировку пузырьком
	for (int j = (N-1); j >= 1; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (A[i] > A[i + 1])
			{
				int C = A[i];
				A[i] = A[i + 1];
				A[i + 1] = C;
			}
		}
	}
		
	//ответ на вопрос а)
	int maxOccurVal = maxNumOfOccur(A);
	std::cout << "a) " << maxOccurVal << std::endl;

	//ответ на вопрос б)
	std::cout << std::endl;
	int sumOfSqr = sumOfSquares(A);
	std::cout << std::endl << "b) " << sumOfSqr << std::endl;

	//ответ на вопрос в)
	std::cout << "v) " << std::endl << std::endl;
	outputTable(A);

	return 0;
}