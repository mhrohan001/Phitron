#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    // for (int i = 0; i <= len_b; i++)
    // {
    //     a[i + len_a] = b[i];
    // }

    // build it function to concate
    // format strcat(kothai, kake)
    strcat(a, b);
    printf("%s %s\n", a, b);
    return 0;
}