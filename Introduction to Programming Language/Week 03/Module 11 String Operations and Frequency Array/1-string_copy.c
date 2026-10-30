#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // int len = strlen(b);
    // for (int i = 0; i <= len; i++)
    // {
    //     a[i] = b[i];
    // }

    strcpy(a, b); // built in function to copy string. strcpy(kothai rakhbo, kake copy korbo)
    printf("%s %s\n", a, b);
    return 0;
}