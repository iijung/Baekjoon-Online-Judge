#include <stdio.h>
#include <string.h>

int main()
{
	char s[51] = {0};
	scanf("%s", s);

	int result = 0;
	int tmp = 0;

	int isPlus = 1;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case '+':
		case '-':
			result += isPlus ? tmp : -tmp;
			tmp = 0;
			if (s[i] == '-') isPlus = 0;
			break;
		default:
			tmp *= 10;
			tmp += s[i] - '0';
			break;
		}
	}
	result += isPlus ? tmp : -tmp;
	printf("%d", result);
	return 0;
}
