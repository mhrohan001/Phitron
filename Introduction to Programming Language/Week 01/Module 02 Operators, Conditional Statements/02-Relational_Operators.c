#include <stdio.h>

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Relational Operation Results (1 = True, 0 = False) ---\n");

    // 1. Equal to
    printf("%d == %d  ->  Result: %d\n", a, b, a == b);

    // 2. Not equal to
    printf("%d != %d  ->  Result: %d\n", a, b, a != b);

    // 3. Greater than
    printf("%d >  %d  ->  Result: %d\n", a, b, a > b);

    // 4. Less than
    printf("%d <  %d  ->  Result: %d\n", a, b, a < b);

    // 5. Greater than or equal to
    printf("%d >= %d  ->  Result: %d\n", a, b, a >= b);

    // 6. Less than or equal to
    printf("%d <= %d  ->  Result: %d\n", a, b, a <= b);

    return 0;
}
