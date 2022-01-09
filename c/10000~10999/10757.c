#include <stdio.h>
#include <string.h>

#define SWAP(x,y) {int t; t=x; x=y; y=t; }
int reverse(char* arr, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		SWAP(arr[i], arr[len-i-1]);
	}
	return len;
}

int main()
{
	char a[10001] = {0}, b[10001] = {0};
	scanf("%s %s", a, b);

	int alen = reverse(a, strlen(a));
	int blen = reverse(b, strlen(b));

	char c[10002] = {0};
	for (int i = 0; i < alen || i < blen; i++)
	{
		int t = c[i] ? c[i] - '0' : 0;
		t += i < alen? a[i] - '0' : 0;
		t += i < blen? b[i] - '0' : 0;

		c[i] = t % 10 + '0';
		if (t > 9) c[i + 1] = '1';
	}
	reverse(c, strlen(c));
	printf("%s", c);
	return 0;
}
