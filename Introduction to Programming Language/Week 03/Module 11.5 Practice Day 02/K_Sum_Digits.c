#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char num[n];
    scanf("%s", &num);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i] - '0';
    }
    printf("%lld\n", sum);
    return 0;
}