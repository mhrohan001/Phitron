// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int val = strcmp(a, b);
    if (val <= 0)
        printf("%s\n", a);
    else if (val > 0)
        printf("%s\n", b);
    return 0;
}