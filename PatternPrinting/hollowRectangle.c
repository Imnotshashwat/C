#include <stdio.h>

int main()
{
    // int n, m;
    // printf("enter the no of rows: ");
    // scanf("%d", &n);
    // printf("enter the no column: ");
    // scanf("%d", &m);

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if ((j == 1 || j == 6) || (i == 1 || i == 4))  // hollow rectangle condition
            {
                printf("# ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
} 
// //