#include <stdio.h>
#include <string.h>

int main()
{
	char s[100] = {0};
	scanf("%s", s);

	for (int i = 'a'; i <= 'z'; i++)
	{
		int idx = -1;
		for (int j = 0; j < strlen(s); j++)
		{
			if (i == s[j]) {
				idx = j;
				break;
			}
		}
		printf("%d ", idx);
	}
	return 0;
}
