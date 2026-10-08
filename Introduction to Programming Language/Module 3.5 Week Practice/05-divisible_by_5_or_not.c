#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("%i Yes\n", i);
        }
        else
        {
            printf("%i No\n", i);
        }
    }
    return 0;
}