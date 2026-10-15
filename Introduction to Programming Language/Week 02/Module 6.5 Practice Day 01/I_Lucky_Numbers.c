#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first = n / 10;
    int sec = n % 10;
    if ((sec != 0 && first % sec == 0) || sec % first == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}