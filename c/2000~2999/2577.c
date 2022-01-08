#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	int num = a * b * c;
	int arr[10] = {0};
	while (num)  {
		arr[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
