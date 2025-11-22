#include <stdio.h>

int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    
    // int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        // a--;
        printf("\n");
    }

    return 0;
}