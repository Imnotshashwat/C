#include <stdio.h>

int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);

    // int a = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * n - (2 * i + 1); k++)
        {
            printf("* ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf("  ");
        }

        // a--;
        printf("\n");
    }

    return 0;
}