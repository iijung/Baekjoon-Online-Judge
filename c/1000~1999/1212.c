#include <stdio.h>
#include <string.h>

int main()
{
	char s[333335] = {0};
	scanf("%s", s);

	int top = 0;
	if ((s[0] - '0') & 4) top += 100;
	if ((s[0] - '0') & 2) top += 10;
	if ((s[0] - '0') & 1) top += 1;
	printf("%d", top);

	int len = strlen(s);
	for (int i = 1; i < len; i++)
	{
		int t = 4;
		while (t)
		{
			printf("%d", (s[i] - '0') & t? 1 : 0);
			t >>= 1;
		}
	}
	return 0;
}
