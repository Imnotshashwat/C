#include <stdio.h>

int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)  //outer loop for rows
    {
        for (int i = 0; i < n; i++)  //inner loop for columns
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}