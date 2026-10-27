#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            pos += a[i];
        else
            neg += a[i];
    }

    printf("%d %d\n", pos, neg);
    return 0;
}