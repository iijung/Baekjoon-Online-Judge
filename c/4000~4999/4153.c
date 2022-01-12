#include <stdio.h>

int main()
{
	int x[3] = {0};
	while(1)
	{
		int max = 0;
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &x[i]);
			if (x[max] < x[i]) max = i;
		}
		if (x[0] == 0 && x[1] == 0 && x[2] == 0) break;

		int a = x[max];
		int b = x[(max + 1) % 3];
		int c = x[(max + 2) % 3];
		printf("%s\n", a * a == b * b + c * c? "right" : "wrong");
	}
	return 0;
}
