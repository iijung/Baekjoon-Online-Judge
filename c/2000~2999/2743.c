#include <stdio.h>

int main()
{
	char s[101] = {0};
	scanf("%s", s);

	int len = 0;
	while (len < sizeof(s) && s[len]) len++;
	printf("%d", len);
	return 0;
}
