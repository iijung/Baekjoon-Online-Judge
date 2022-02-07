#include <stdio.h>

int main()
{
	char s[11] = {0};
	while(~scanf("%10s", s))
	{
		printf("%s\n", s);
	}
	return 0;
}
