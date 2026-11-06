#include <stdio.h>

// In functions variable by default passed by value

// array by default pass by reference
void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5;
    fun(a, n);

    return 0;
}