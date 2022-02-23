#include <stdio.h>

#define MAX 100000

int Top = -1;
int Stack[MAX];

int empty() { return Top < 0; }
int full() { return Top == MAX; }
int pop() { return empty()? -1 : Stack[Top--]; }
void push(int x) { if(full()) return ; Stack[++Top] = x; }
int sum()
{
	int sum = 0;
	for (int i = 0; i <= Top; i++) sum += Stack[i];
	return sum;
}

int main()
{
	int k = 0;
	scanf("%d", &k);

	int n = 0;
	while (k--)
	{
		scanf("%d", &n);
		if (n) push(n);
		else pop();
	}
	printf("%d", sum());
	return 0;
}
