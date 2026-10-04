#include <stdio.h>

int main()
{
    // --- VALID VARIABLE NAMES ---
    int speed = 60;       // Lowercase letters only
    int total_score = 95; // Underscore to separate words
    int value2 = 100;     // Digit at the end
    int _id = 1234;       // Starting with an underscore

    // --- CASE SENSITIVITY DEMONSTRATION ---
    int age = 20;
    int Age = 35; // Valid, distinct variable from 'age'

    // --- INVALID VARIABLE NAMES (Uncommenting these will cause compiler errors) ---
    // int 2value = 50;      // ERROR: Cannot start with a digit
    // int total score = 80; // ERROR: Cannot contain spaces
    // int float = 5.5;      // ERROR: Cannot use a keyword ('float')
    // int cost$ = 10;       // ERROR: Cannot use special characters ('$')

    // Printing valid variables
    printf("Speed: %d\n", speed);
    printf("Total Score: %d\n", total_score);
    printf("Value 2: %d\n", value2);
    printf("ID: %d\n", _id);
    printf("age (lowercase): %d | Age (capitalized): %d\n", age, Age);

    return 0;
}
