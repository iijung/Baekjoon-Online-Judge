#include <stdio.h>
#include <string.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int point = 1;
		int score = 0;
		char str[100] = {0};
		scanf("%s", str);

		for (int j = 0; j < strlen(str); j++)
		{
			switch (str[j])
			{
			case 'O':
				score += point;
				point++;
				break;
			case 'X':
				point = 1;
				break;
			default:
				break;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
