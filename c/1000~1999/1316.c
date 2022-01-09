#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int cnt = 0;
	char s[100] = {0};
	char checker[26] = {0};
	for (int i = 0; i < n; i++)
	{
		memset(checker, 0, sizeof(checker));
		scanf("%s", s);

		int is_group = 1;
		int len = strlen(s);
		for (int j = 0; j < len; j++)
		{
			if (checker[s[j] - 'a'])
			{
				is_group = 0;
				break;
			}
			checker[s[j] - 'a'] = 1;
			while (j + 1 < len && s[j] == s[j+1]) j++;
		}
		if (is_group) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
