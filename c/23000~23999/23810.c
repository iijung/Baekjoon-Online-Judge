#include <stdio.h>
#include <string.h>

char Arr[2][501];

int main()
{
	int n = 0;
	scanf("%d", &n);

	memset(Arr[0], '@', n * 5);
	memset(Arr[1], '@', n);
	for (int i = 0; i < n; i++) puts(Arr[0]);
	for (int i = 0; i < n; i++) puts(Arr[1]);
	for (int i = 0; i < n; i++) puts(Arr[0]);
	for (int i = 0; i < n; i++) puts(Arr[1]);
	for (int i = 0; i < n; i++) puts(Arr[1]);
	return (0);
}
