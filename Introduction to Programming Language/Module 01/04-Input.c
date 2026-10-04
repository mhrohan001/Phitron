#include <stdio.h>
int main()
{
    int n; // Declaring variable without initiazing a value stores garbage(random) value
    float f;
    char c;

    scanf("%d %f %c", &n, &f, &c);
    // The '&' operator gives scanf() the exact memory address of the variable so it knows where to save your input.

    printf("%d %.2f %c\n", n, f, c);
    return 0;
}
