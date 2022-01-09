#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000] = {0};
	scanf("%s", s);

    int alpha[26] = {0};
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z') alpha[s[i] - 'a']++;
		else if ('A' <= s[i] && s[i] <= 'Z') alpha[s[i] - 'A']++;
	}

	int max = 0;
	int same = 0;
	for (int i = 1; i < 26; i++)
	{
		if (alpha[max] == alpha[i]) same = 1;
		else if (alpha[max] < alpha[i])
		{
			max = i;
			same = 0;
		}
	}
	printf("%c", same? '?' : 'A' + max);
	return 0;
}
