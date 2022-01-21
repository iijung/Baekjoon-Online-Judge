#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    
    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            for (int k = 0; k < n; k++)
            {
                if (i == k || j == k) continue;
                
                int sum = arr[i] + arr[j] + arr[k];
                if (max < sum && sum <= m) max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}
