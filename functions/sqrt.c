#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter a no: ");
    scanf("%d", &a);
    float root = sqrt(a);
    printf("Square root is %.2f", root);
    return 0;
}