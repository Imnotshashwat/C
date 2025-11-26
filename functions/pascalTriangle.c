#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // loop for rows
    {
        for (int j = 0; j <= i; j++) // loop for columns
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}