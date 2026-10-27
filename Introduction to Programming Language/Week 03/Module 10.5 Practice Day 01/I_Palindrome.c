#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        cnt++;
    }
    int flag = 1;
    int i = 0;
    int j = cnt - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            flag = 0;
        i++;
        j--;
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}