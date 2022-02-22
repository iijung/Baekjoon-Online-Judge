#include <stdio.h>
#include <string.h>

#define MAX 10000

int Top = -1;
int Stack[MAX];

void push(int x) { if (Top >= MAX) return; Stack[++Top] = x; }
int size() { return Top + 1; }
int empty() { return Top < 0? 1 : 0; }
int pop() { return empty()? -1 : Stack[Top--]; }
int top() { return empty()? -1 : Stack[Top]; }

int main()
{
	int n = 0;
	scanf("%d", &n);

	char cmd[6] = {0};

	while (n--)
	{
		scanf("%s", cmd);
		getchar();
		if (!strcmp(cmd, "push")) {
			int x = 0;
			scanf("%d", &x);
			push(x);
		} else if (!strcmp(cmd, "pop")) {
			printf("%d\n", pop());
		} else if (!strcmp(cmd, "size")) {
			printf("%d\n", size());
		} else if (!strcmp(cmd, "empty")) {
			printf("%d\n", empty());
		} else if (!strcmp(cmd, "top")) {
			printf("%d\n", top());
		}
	}
	return 0;
}
