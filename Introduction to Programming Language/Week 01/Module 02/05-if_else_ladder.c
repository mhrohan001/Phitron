#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    // The first matching block runs; everything else is skipped
    if (tk >= 100) // condition
    {
        printf("Burger Khabo.\n");
    }
    else if (tk >= 50)
    {
        printf("Fuchka Khabo.\n");
    }
    else if (tk >= 20)
        printf("Chips Khabo.\n");
    else
    {
        printf("Kichui khabo na.\n");
    }
    return 0;
}