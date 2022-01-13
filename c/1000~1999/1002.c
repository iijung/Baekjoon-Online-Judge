#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        int x1 = 0, y1 = 0, r1 = 0, x2 = 0, y2 = 0, r2 = 0;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        
        if (d == 0) {
            printf("%d\n", r1 == r2? -1 : 0);
        } else {
            if (abs(r1 - r2) < d && d < r1 + r2) printf("2\n");
            else if (abs(r1 - r2) == d || d == r1 + r2) printf("1\n");
            else if (abs(r1 - r2) > d || d > r1 + r2) printf("0\n");
        }
    }
    return 0;
}
