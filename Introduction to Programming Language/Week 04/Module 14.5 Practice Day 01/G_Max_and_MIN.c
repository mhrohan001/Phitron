#include <stdio.h>

int max(int arr[], int n)
{
    int m = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (m < arr[i])
            m = arr[i];
    }
    return m;
}
int min(int arr[], int n)
{
    int m = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (m > arr[i])
            m = arr[i];
    }
    return m;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d %d", min(a, n), max(a, n));
    return 0;
}