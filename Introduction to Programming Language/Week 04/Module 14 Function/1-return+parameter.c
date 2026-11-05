#include <stdio.h>

/*
return_type function_name(parameters)
{

return
}
*/

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}
int main()
{
    int val = sum(10, 5);
    int val2 = sub(100, 200);
    int val3 = sum(2, 3);
    printf("%d\n", val);
    printf("%d\n", val2);
    printf("%d\n", val3);
    return 0;
};