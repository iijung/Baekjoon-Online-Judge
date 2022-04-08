#include <stdio.h>
#include <regex.h>

int main()
{
    int t = 0;
    scanf("%d", &t);

    regex_t reg;
    regcomp(&reg, "^(100+1+|01)+$", REG_EXTENDED | REG_NOSUB);

    char s[200] = {0};
    while (t--)
    {
        scanf("%s", s);

        if (regexec(&reg, s, 1, 0, 0) == 0) printf("YES\n");
        else printf("NO\n");
    }
    regfree(&reg);
    return 0;
}
