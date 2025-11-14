// print the sum of digits of a number

#include <stdio.h>

int main()
{
    int n;
    int ld = 0;
    int sum = 0;
    printf("enter a no: ");
    scanf("%d", &n);
    while (n > 0)
    {
        ld = n % 10;
        // if (2 % ld == 0)
            sum = sum + ld;
        n = n / 10;
    }
    printf("the digits of a no are %d: ", sum);
    return 0;
}