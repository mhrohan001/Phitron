#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int x;
    scanf("%lld", &x);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("-1\n");

    return 0;
}