#include <stdio.h>
int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    int flag = 0;
    int ans;

    if (s == '+')
    {
        ans = a + b;
        if (ans == c)
            flag = 1;
    }
    else if (s == '-')
    {
        ans = a - b;
        if (ans == c)
            flag = 1;
    }
    else if (s == '*')
    {
        ans = a * b;
        if (ans == c)
            flag = 1;
    }

    if (flag)
        printf("Yes\n");
    else
        printf("%d\n", ans);
    return 0;
}