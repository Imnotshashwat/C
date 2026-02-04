#include <stdio.h>

void call(int *y)
{
    printf("Address of z is: %d\n", y);
    printf("%d\n", *y);
    *y = 7;
    printf("%d\n", *y);
}
int main()
{
    // int a=5, *b, **c;
    // b = &a;
    // c = &b;
    // printf("%d %d %d",a,b,c);
    int z = 5;
    call(&z);
    printf("%d\n", z);
    return 0;
}