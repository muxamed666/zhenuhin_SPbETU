#include <iostream>

int Day(int D, int M, int Y)
{
	int a, y, m, R;
	a = (14 - M) / 12;
	y = Y - a;
	m = M + 12 * a - 2;
	R = 7000 + (D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
	return R % 7;
}

int returnDayOfWeek(int d1, int m1, int y1, int wd, int d, int m, int y)
{
	int curr = Day(d1, m1, y1);
	int diff = wd - curr;
	int nd = Day(d, m, y) + diff;
	if (nd < 0) nd = 7 - nd;
	if (nd > 6) nd = nd - 7;
	return nd;
}

void drawCalendar(int start, int* months_len, int M, int Y)
{
	if (Y % 400 == 0)
	{
		months_len[1] = 29;
	}

	if (Y % 100 != 0 && Y % 4 == 0)
	{
		months_len[1] = 29;
	}

	int current_month = months_len[M - 1];
	int weekday_num = start;
	if (weekday_num == 0) { weekday_num = 7; }

	for (int i = 1; i < weekday_num; i++)
	{
		std::cout << "   ";
	}

	for (int i = 1; i <= current_month; i++)
	{
		if (i < 10)
		{
			std::cout << "  " << i;
		}
		else
		{
			std::cout << " " << i;
		}

		weekday_num++;
		if (weekday_num > 7) { weekday_num = 1; std::cout << std::endl; }
	}
}

int main()
{
	int month_length[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char* days_str[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int dd, mm, yy, weekd;

	std::cout << "Day: "; std::cin >> dd;
	std::cout << "Month: "; std::cin >> mm;
	std::cout << "Year: "; std::cin >> yy;
	std::cout << "Weekday (1 = monday, 7 = Sunday): "; std::cin >> weekd;
	
	if (weekd == 7) { weekd = 0; }

	int nd, nm, ny;

	ny = -1;

	while (ny != 0)
	{
		std::cout << "--------------------\n"; 
		std::cout << "Day: "; std::cin >> nd;
		std::cout << "Month: "; std::cin >> nm;
		std::cout << "Year: "; std::cin >> ny;
		std::cout << days_str[returnDayOfWeek(dd, mm, yy, weekd, nd, nm, ny)] << std::endl;
	}

	std::cout << std::endl << std::endl;
	drawCalendar(returnDayOfWeek(dd, mm, yy, weekd, 1,  mm, yy), month_length, mm, yy);

	return 0;
}