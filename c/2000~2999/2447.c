#include <stdio.h>

void f(int n, int x, int y)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) putchar(' ');
	else if (n / 3 == 0) putchar('*');
	else f(n / 3, x, y);
}

int main()
{

	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f(n, i, j);
		}
		putchar('\n');
	}
	return 0;
}
//x,y;void f(int n){if((x/n)%3==1&&(y/n)%3==1)putchar(32);else if(n/3==0)putchar(42);else f(n/3);}i;main(n){scanf("%d",&n);while(i<n*n){x=i/n;y=i%n;f(n);if(++i%n==0)puts("");}}
