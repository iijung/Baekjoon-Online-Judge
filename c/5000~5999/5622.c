#include <stdio.h>
#include <string.h>

int main()
{
	int code[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

	char s[16] = {0};
	scanf("%s", s);

	int time = 0;
	for (int i = 0, len = strlen(s); i < len; i++)
	{
		time += code[s[i] - 'A'] + 1;
	}
	printf("%d", time);
	return 0;
}
