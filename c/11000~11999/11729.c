#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int via, int to)
{
    if (n == 1) {
        printf("%d %d\n", from, to);
    } else {
        hanoi(n - 1, from, to, via);
        printf("%d %d\n", from, to);
        hanoi(n - 1, via, from, to);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n) - 1);
    hanoi(n, 1, 2, 3);
    return 0;
}
