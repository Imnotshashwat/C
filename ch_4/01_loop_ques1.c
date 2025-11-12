// print the table of n

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = n; i <= n * 10; i = i + n)
    {

        // if (i % n == 0) // i % 2 != 0   for odd numbers

        printf("%d ", i);
    }

    return 0;
}