#include <stdio.h>

int main()
{
	char s[101] = {0};
	scanf("%s", s);

	for (int i = 0; s[i]; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z') s[i] -= 32;
		else if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
	}
	printf("%s", s);
	return (0);
}
