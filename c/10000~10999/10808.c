#include <stdio.h>
#include <string.h>

int main()
{
	char s[101] = {0};
	scanf("%s", s);

	int cnt[26] = {0};
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		cnt[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", cnt[i]);
	}
	return 0;
}
