#include <stdio.h>
#include <string.h>

#define MAX 10000
#define NEXT(x) { x = (x + 1) % MAX; }

int Front = -1;
int Back = -1;
int Queue[MAX];

int size() { return (MAX + Back - Front) % MAX; }
int empty() { return Front == Back ? 1 : 0; }
int front() { if (empty()) return -1; return Queue[Front + 1]; };
int back() {  if (empty()) return -1; return Queue[Back]; };
int pop() {  if (empty()) return -1; NEXT(Front); return Queue[Front]; }
void push(int x) { NEXT(Back); Queue[Back] = x; }

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
		} else if (!strcmp(cmd, "front")) {
			printf("%d\n", front());
		} else if (!strcmp(cmd, "back")) {
			printf("%d\n", back());
		}
	}
	return 0;
}
