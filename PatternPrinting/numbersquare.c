#include <stdio.h>

int main()
{
    int n, m;
    printf("enter no of rows: ");
    scanf("%d", &m);
    printf("enter no of columns: ");
    scanf("%d", &n);
    for (int i = 1; i <= m ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}