#include <stdio.h>

int main()
{
    int a, b, flag = 1;
    scanf("%d %d", &a, &b);

    char s[a + b + 2];
    scanf("%s", s);

    if (s[a] != '-')
        flag = 0;

    for (int i = 0; i < a + b + 1; i++)
    {
        if (i != a && (s[i] < '0' || s[i] > '9'))
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}