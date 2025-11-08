// Print n natural numbers using do-while loop

#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", ++i);
    } while (i < n);

    return 0;
}