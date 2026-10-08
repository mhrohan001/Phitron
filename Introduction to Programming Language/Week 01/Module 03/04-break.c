#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; //loop will stop at i == 5
        }
        printf("%d\n", i);
    }
    return 0;
}