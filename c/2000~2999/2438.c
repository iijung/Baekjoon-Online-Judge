#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
//i,j;main(n){scanf("%d",&n);while(i++<n){j=0;while(j++<i)printf("*");puts("");}}
