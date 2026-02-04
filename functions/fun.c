#include <stdio.h>
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
int main()
{
    int a, b, c;
    printf("enter 2 no: ");
    scanf("%d%d", &a, &b);
    // float p = add(a, b);
    c = add(a, b);
    printf("Addition is %d\n", c);
    printf("Size of p is %d bytes\n", sizeof(c));
    return 0;
}