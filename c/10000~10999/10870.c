#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0) return 0;
    return n < 2? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}