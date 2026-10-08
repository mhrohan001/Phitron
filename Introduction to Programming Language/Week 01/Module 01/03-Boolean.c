#include <stdio.h>
#include <stdbool.h> // This is for bool variable
int main()
{
    // bool stores either true(1) or false(0) value as an intger. Size --> 1 byte
    bool check = true;
    bool found = false;
    printf("%d %d", check, found); 
    return 0;
}