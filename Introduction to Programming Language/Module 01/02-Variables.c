#include <stdio.h>
int main()
{
    //  1 byte = 8 bits
    int n = 12;                   // int stores whole number . Size --> 4 byte
    long long int l = 1999999999; // long long int stores whole number. Size --> 8 byte
    float f = 3.14;               // float stores decimal numbers. Size --> 4 bytes
    double d = 3.1459;            // double stores decimal numbers. Size --> 8 bytes
    char c = '@';                 // char stores any single letter or symbol. Size --> 1 byte

    printf("%d %lld %.2f %.4lf %c", n, l, f, d, c);

    // A format specifier is a % placeholder that defines the data type for input or output in C.
    // int --> %d
    // long long int --> %lld
    // float --> %f
    // double --> %lf
    // char --> %c
    return 0;
}