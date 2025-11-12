// print AP without using formula

#include <stdio.h>

int main()
{

    int n, a = 4;
    printf("enter a no: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        a=a+3;
    }

    return 0;
}