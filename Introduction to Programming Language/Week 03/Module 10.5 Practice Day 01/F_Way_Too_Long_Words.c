#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", &s);
        int cnt = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            cnt++;
        }
        if (cnt > 10)
            printf("%c%d%c\n", s[0], cnt - 2, s[cnt - 1]);
        else
            printf("%s\n", s);
    }
    return 0;
}