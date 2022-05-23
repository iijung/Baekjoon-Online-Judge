#include <stdio.h>
#include <string.h>

int main()
{
	char s[100000] = {0};
	scanf("%s", s);

	int cnt = 1;
	int len = strlen(s);
	for (int i = 0; i < len - 1; i++)
	{
		if (s[i] >= s[i + 1])
			++cnt;
	}
	printf("%d", cnt);
	return (0);
}
