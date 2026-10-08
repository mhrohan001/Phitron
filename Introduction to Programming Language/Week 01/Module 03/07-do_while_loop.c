#include <stdio.h>
int main()
{

    // prints power of 2 series

    int i = 2;

    do
    {
        printf("%d\n", i);
        i *= 2;
    } while (i <= 64);
    // do while loop executes first then checks condition
    return 0;
}