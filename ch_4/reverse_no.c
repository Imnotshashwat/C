#include <stdio.h>

int main()
{
    int n, ld = 0, rev = 0;
    printf("enter a no: ");
    scanf("%d", &n);
    while (n > 0)
    {
        ld = n % 10;
        // if (2 % ld == 0)
        rev = rev * 10;
        rev = rev + ld;
        n = n / 10;
    }
    printf("the reverse no is %d: ", rev);
    return 0;
} 


