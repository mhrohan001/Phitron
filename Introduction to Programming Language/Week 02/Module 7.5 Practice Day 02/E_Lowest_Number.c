#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            pos = i + 1;
            break;
        }
    }
    printf("%d %d\n", min, pos);
    return 0;
}