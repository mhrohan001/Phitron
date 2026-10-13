#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c >= '0' && c <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(c >= 'a' && c <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}