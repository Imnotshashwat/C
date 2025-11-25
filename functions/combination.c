#include <stdio.h>
int factorial(int num)
{
    int fact = 2;
    for (int i = 2; i < num; i++)
    {
        fact = fact * (i+1);
    }
    return fact;
}
int main()
{
    int n, r;
    printf("enter n: ");
    scanf("%d", &n);

    printf("enter r: ");
    scanf("%d", &r);
    
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("nCr is %d", ncr);


    return 0;
}