#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);
    for (int i = 0; s[i] != '\\'; i++) // '\0' is a null pointer
    {
        printf("%c", s[i]);
    }
    return 0;
}