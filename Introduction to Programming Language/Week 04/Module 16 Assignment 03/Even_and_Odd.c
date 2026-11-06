#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
            odd++;
        else
            even++;
    }
    printf("%d %d", even, odd);
}
int main()
{
    odd_even();
    return 0;
}