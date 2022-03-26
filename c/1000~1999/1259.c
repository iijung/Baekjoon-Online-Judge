#include <stdio.h>
#include <string.h>

int f(char s[], int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i]) return 0;
	}
	return 1;
}

int main()
{
	char s[100000] = {0};
	while (1)
	{
		scanf("%s", s);
		if (!strcmp(s, "0")) break;
		printf("%s\n", f(s, strlen(s))? "yes" : "no");
	}
	return 0;
}
