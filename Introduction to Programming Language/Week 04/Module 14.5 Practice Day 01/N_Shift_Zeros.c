#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
            cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", 0);
    }
    return 0;
}