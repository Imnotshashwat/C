#include <stdio.h>

int main()
{
    int f, c = 1;
    printf("Enter the number: ");
    scanf("%d", &f);
    for (int i = 1; i <= f; i++)
    {
        c = c * i; // logic
    }
    printf("Factorial is %d", c);
    return 0;
}