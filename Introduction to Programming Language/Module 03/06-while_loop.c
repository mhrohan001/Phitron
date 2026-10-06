#include <stdio.h>
int main()
{

    // prints power of 2 series
    int i = 2;
    while (i <= 64)
    {
        printf("%d\n", i);
        i *= 2;
    }
    return 0;
}