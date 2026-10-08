#include <stdio.h>
int main()
{
    // for(int i = 1; i <= 10; i++)
    // {
    //     printf("%d. I am sorry.\n",i);
    // }



    // prints power of 2 series
    for (int i = 2; i <= 64; i *= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}