#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	char s1[102] = {0};
	char s2[102] = {0};
	memset(s1, '@', n + 2);
	memset(s2, ' ', n + 2);
	s2[0] = s2[n + 1] = '@';
	for (int i = 0; i < n + 2; i++)
	{
		puts(i == 0 || i == n + 1? s1 : s2);
	}
	return (0);
}
