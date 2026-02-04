#include <stdio.h>

int main()
{
    int a = -1, b = 1, r, c;
    printf("Enter the range: ");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        c = a + b;
        printf("%d  ", c);
        a = b;
        b = c;
    }

    return 0;
}