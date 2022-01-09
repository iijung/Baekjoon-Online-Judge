#include <stdio.h>
#include <string.h>

int isCroatia(char* c)
{
	char* code[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	for (int i = 0; i < 8; i++)
	{
		int len = strlen(code[i]);
		if (!strncmp(c, code[i], len)) return len;
	}
	return 0;
}

int main()
{
	char s[100] = {0};
	scanf("%s", s);

	int  cnt = 0;
	int idx = 0;
	int len = strlen(s);
	while (idx < len)
	{
		int t = isCroatia(s + idx);
		cnt++;
		idx += t? t : 1;
	}
	printf("%d", cnt);
	return 0;
}
