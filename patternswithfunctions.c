#include <stdio.h>
void pattern1(int n)
{
    printf("enter the no: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}
void pattern2(int n)
{
    printf("enter the no: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}
void pattern3(int n)
{
    printf("enter the no: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return;
}
void pattern4(int n)
{
    printf("enter the no: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}
void pattern5(int n)
{
    printf("enter the no: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return;
}

int main()
{
    // pattern1(0);
    // pattern2(0);
    // pattern3(0);
    // pattern4(0);
    // pattern5(0);

    return 0;
}