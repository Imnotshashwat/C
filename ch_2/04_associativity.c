#include <stdio.h>

int main()
{
    int a = 4;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 2);
    printf("The value is %d", 3*b/2*c + 2*a);
    // 3*b/2*c + 2*a
    // 3*b/2*c + 8
    // 18/2*c + 8
    // 9*c + 8
    // 81 + 8
    // 89
    return 0;
}