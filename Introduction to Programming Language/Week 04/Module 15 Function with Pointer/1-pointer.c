#include <stdio.h>
// pointer variable is a variable that stores that stores other variables address in memory
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);  // this prints the pointer value which is x variable's addresss
    printf("%p\n", &ptr); // address of the pointer that stores x named variable's address
    printf("%d\n", *ptr); // this is called dereferencing which shows the x value instead of address of it

    *ptr = 200; // this changes the value of x
    printf("%d\n", x);

    return 0;
}