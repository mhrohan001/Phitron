#include <stdio.h>
int y = 10; // global vairable. It can be used anywhere in this file

// same vairable is different in different scopes. '{}' this is called scope
int sum()
{
    int x = 200;
    printf("Sum function --> %d\n", x);
}
int main()
{
    int x = 10;
    printf("Main function --> %d\n", x);
    sum();
    return 0;
}