#include <stdio.h>
#include <string.h>
int is_pallindrome(char s[])
{
    int flag = 1;
    int i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    char s[1001];
    scanf("%s", &s);
    if (is_pallindrome(s) == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}