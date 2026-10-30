#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);

        int len1 = strlen(s);
        int len2 = strlen(t);

        int mx;

        if (len1 > len2)
        {
            mx = len1;
        }
        else
        {
            mx = len2;
        }
        for (int i = 0; i < mx; i++)
        {
            if (i < len1)
                printf("%c", s[i]);

            if (i < len2)
                printf("%c", t[i]);
        }

        printf("\n");
    }

    return 0;
}