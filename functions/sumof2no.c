#include <stdio.h>
int add(int n, int m)
{
    return n + m;
}

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("%d\n",sum);
    return 0;
}