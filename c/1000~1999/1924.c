#include <stdio.h>

int main()
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char* week_str[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

	int x = 0 , y = 0;
	scanf("%d %d", &x, &y);

	int week = 1; // 2017.01.01 = MON
	for (int i = 0; i < x - 1; i++)
	{
		week += month[i];
	}
	week += y - 1;
	week %= 7;

	printf("%s", week_str[week]);
	return 0;
}
