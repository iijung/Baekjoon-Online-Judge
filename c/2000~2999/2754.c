#include <stdio.h>

int main()
{
	char input[3] = {0};
	scanf("%s", input);

	float score = 0;
	switch (input[0])
	{
	case 'A': score += 4; break;
	case 'B': score += 3; break;
	case 'C': score += 2; break;
	case 'D': score += 1; break;
	case 'F':
		printf("%.1f", score);
		return (0);
	}
	switch (input[1])
	{
	case '+': score += 0.3; break;
	case '-': score -= 0.3; break;
	}
	printf("%.1f", score);
	return (0);
}
