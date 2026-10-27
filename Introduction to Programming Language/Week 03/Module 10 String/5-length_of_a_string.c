#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    int cnt = 0;
    // for (int i = 0; s[i] != '\0'; i++) // '\0' is a null pointer
    // {
    //     cnt++;
    // }

    cnt = strlen(s); // built-in function to get string size
    printf("%d\n", cnt);
    return 0;
}