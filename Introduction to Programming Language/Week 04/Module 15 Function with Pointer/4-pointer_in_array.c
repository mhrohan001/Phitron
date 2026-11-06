#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("Array er 0th index address: %p\n", &a[0]);
    printf("Array er nam: %p\n", a);

    return 0;
}