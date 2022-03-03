#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int t = 0;
	int cnt = 0;
	for (int i = 5; i <= n; i++)
	{
		t = i;
		while (t % 5 == 0)
		{
			cnt++;
			t /= 5;
		}
	}
	printf("%d", cnt);
	return 0;
}
