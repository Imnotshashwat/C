// count the digits of a number

#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("enter a no: ");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("the digits of a no are %d: ", count);
    return 0;
}