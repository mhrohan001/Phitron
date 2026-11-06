#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hashdash = 1, sp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
            for (int j = 1; j <= hashdash; j++)
            {

                printf("#");
            }
        else
        {
            for (int j = 1; j <= hashdash; j++)
            {
                printf("-");
            }
        }
        printf("\n");
        hashdash += 2;
        sp--;
    }

    sp = 1, hashdash -= 4;
    for (int i = 1; i <= n -1 ; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        if ((n % 2 == 1 && i % 2 == 0) || (n%2 == 0 && i % 2 == 1))
            for (int j = 1; j <= hashdash; j++)
            {

                printf("#");
            }
        else
        {
            for (int j = 1; j <= hashdash; j++)
            {
                printf("-");
            }
        }
        printf("\n");
        hashdash -= 2;
        sp++;
    }
    return 0;
}