#include <stdio.h>
#include <string.h>

char Arr[3][501];

int main()
{
	int n = 0;
	scanf("%d", &n);

	memset(Arr[0], '@', 5 * n);
	memset(Arr[1], '@', 4 * n);
	memset(Arr[2], '@', 3 * n);
	memset(Arr[0] + n, ' ', 3 * n);
	memset(Arr[1] + n, ' ', 2 * n);
	for (int i = 0; i < n; i++) puts(Arr[0]);
	for (int i = 0; i < n; i++) puts(Arr[1]);
	for (int i = 0; i < n; i++) puts(Arr[2]);
	for (int i = 0; i < n; i++) puts(Arr[1]);
	for (int i = 0; i < n; i++) puts(Arr[0]);
	return (0);
}
