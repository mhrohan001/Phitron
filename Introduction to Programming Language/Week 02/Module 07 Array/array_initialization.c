#include <stdio.h>
int main()
{
    int x = 10; // declare and initialize
    int arr[5] = {10, 20}; // declare and initialize, if all values is not init then remainings will be zero 

    // int arr[5] = {0} // all values will be initialzed to zero. only fixed size array possible

    // int arr[n] = {0} // this is not possible if n is not fixed



    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}