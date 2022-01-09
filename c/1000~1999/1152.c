#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000000] = {0};
	scanf("%[^\n]s", s);

	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ') s[i] = '\0';
	}

	int cnt = 0;
	int idx = 0;
	while (idx < len)
	{
		while (idx < len && s[idx] == '\0') idx++;

		int wlen = strlen(s + idx);
		if (wlen > 0)
		{
			cnt++;
		}
		idx += wlen;
	}
	printf("%d", cnt);
	return 0;
}
