#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			putchar(j < n - i -1? ' ' : '*');
		}
		putchar('\n');
	}
	return 0;
}
// char s[];main(n){scanf("%d",&n);for(memset(s,32,n);n--;puts(s))s[n]=42;}
