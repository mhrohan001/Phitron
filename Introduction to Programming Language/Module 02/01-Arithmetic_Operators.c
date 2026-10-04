#include <stdio.h>
int main()
{
    int a = 19, b = 5;
    printf("Sum = %d\n", a + b);
    printf("Sub = %d\n", a - b);
    printf("Mul = %d\n", a * b);
    printf("Div = %d\n", a / b); // integer operation will truncate decimal points value. 19/5 = 3
    printf("Rem = %d\n", a % b);
    return 0;
}