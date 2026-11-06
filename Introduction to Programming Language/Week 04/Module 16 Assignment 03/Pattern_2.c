#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1, sp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = cnt; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        cnt++;
        sp--;
    }
    return 0;
}