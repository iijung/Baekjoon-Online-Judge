#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, m = 0;
	scanf("%d %d %d %d", &a, &b, &c, &m);

	int work = 0;
	int fatigue = 0;
	for (int i = 0; i < 24; i++)
	{
		if (fatigue + a > m)
		{
			fatigue = fatigue < c? 0 : fatigue - c;
		}
		else
		{
			++work;
			fatigue += a;
		}
	}
	printf("%d", work * b);
	return (0);
}
