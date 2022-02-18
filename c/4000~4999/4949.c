#include <stdio.h>
#include <string.h>
#define MAX 100

int Top = -1;
char Stack[MAX];

int isEmpty() { return Top < 0; }
int isFull() { return Top >= MAX; }
char peek() { if (!isEmpty()) return Stack[Top]; }
char pop() { if (!isEmpty()) return Stack[Top--]; }
void push(char c) { if (!isFull()) Stack[++Top] = c; }

int f(char* s, int len)
{
	Top = -1;
	for (int i = 0; i < len; i++)
	{
		if (s[i] != '(' && s[i] != ')' && s[i] != '[' && s[i] != ']') continue;

		if (isEmpty()) push(s[i]);
		else if (peek() == '(' && s[i] == ')') pop();
		else if (peek() == '[' && s[i] == ']') pop();
		else push(s[i]);
	}
	return isEmpty();
}

int main()
{
	char s[101] = {0};
	while(1)
	{
		scanf("%[^\n]s", s);
		getchar();
		if (strlen(s)== 1 && s[0] == '.') break;
		printf("%s\n", f(s, strlen(s)) ? "yes" : "no");
	}
	return 0;
}
