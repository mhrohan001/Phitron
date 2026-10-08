#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // loop will skip i == 5 value
        }
        printf("%d\n", i);
    }
    return 0;
}