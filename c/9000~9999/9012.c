#include <stdio.h>
#include <string.h>

int isVPS(char* s, int len)
{
	int t = 0;
	for (int i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case '(':
			t++;
			break;
		case ')':
			t--;
			if (t < 0) return 0;
		default:
			break;
		}

	}
	return t ? 0 : 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	char s[51] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		printf("%s\n", isVPS(s, strlen(s)) ? "YES" : "NO");
	}
	return 0;
}
