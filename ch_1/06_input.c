#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    scanf("%d", &a); // & = address of operator
    scanf("%f", &b);
    scanf("%c", &c);
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    return 0;
}