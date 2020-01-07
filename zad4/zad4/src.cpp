#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	unsigned int N = 0;

	std::cout << "N = ";
	std::cin >> N;

	//����� ������� ����� ������� ������ ���������� 
	//������� ������� ����� ����� �������� true � 
	//������� prime ����� ���������� ���������

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

	//����� ����������� ���� ������� �����
	for (unsigned int i = 0; i <= N; i++)
	{
		if (prime[i])
		{
			std::cout << i << ", ";
		}
	}

	return 0;
}