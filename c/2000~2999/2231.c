#include <stdio.h>

int f(int m)
{
    int ans = m;
    while (m > 0)
    {
        ans += m % 10;
        m /= 10;
    }
    return ans;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    
    int min = n;
    for (int i = 1; i < n; i++)
    {
        int t = f(i);
        if (t == n && i < min) min = i;
    }
    printf("%d", min == n? 0 : min);
    return 0;
}
