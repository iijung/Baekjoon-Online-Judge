#include <stdio.h>
#include <string.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int r = 0;
		char s[20] = {0};
		scanf("%d %s", &r, s);

		for (int j = 0; j < strlen(s); j++)
		{
			for (int k = 0; k < r; k++)
			{
				putchar(s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
