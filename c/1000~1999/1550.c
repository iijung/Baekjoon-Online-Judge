#include <stdio.h>
#include <string.h>

int main()
{
	char c[7] = {0};
	scanf("%s", c);

	int rtn = 0;
	int digit = 1;
	for (int i = strlen(c) -1; i >= 0; i--)
	{
		int t = c[i] < 'A'? c[i] - '0' : c[i] - 'A' + 10;
		rtn += t * digit;
		digit *= 16;
	}
	printf("%d", rtn);
	return 0;
}
