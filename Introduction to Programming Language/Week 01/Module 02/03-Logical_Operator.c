#include <stdio.h>

int main()
{
    int t = 1, f = 0, y = 10;

    // Logical operations summary
    printf("AND (&&): 1 && 1 = %d, 1 && 0 = %d\n", t && t, t && f);
    printf("OR  (||): 1 || 0 = %d, 0 || 0 = %d\n", t || f, f || f);
    printf("NOT (!):  !1 = %d, !0 = %d\n\n", !t, !f);

    // Short-Circuit: Because 'f' is 0, execution stops and 'y++' never runs
    if (f && ++y)
    {
    }
    printf("Short-Circuit: y is still %d (did not increment)\n", y);

    // --> && short-circuits if the first condition is false (0). The second part is ignored.
    // --> || short-circuits if the first condition is true (1). The second part is ignored.
    return 0;
}
