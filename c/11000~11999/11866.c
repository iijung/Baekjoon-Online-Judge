#include <stdio.h>

#define MAX 10000
#define NEXT(x) { x = (x + 1) % MAX; }

int Front = -1;
int Back = -1;
int Queue[MAX];

int size() { return (MAX + Back - Front) % MAX; }
int empty() { return Front == Back ? 1 : 0; }
int front() { if (empty()) return -1; return Queue[Front + 1]; };
int back() {  if (empty()) return -1; return Queue[Back]; };
int pop() {  NEXT(Front); return Queue[Front]; }
void push(int x) { NEXT(Back); Queue[Back] = x; }

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) push(i);

	printf("<");
	while(1)
	{
		for (int i = 1; i < k; i++)
		{
			push(pop());
		}
		printf("%d", pop());
		if (empty()) break;
		printf(", ");
	}
	printf(">");
	return 0;
}
