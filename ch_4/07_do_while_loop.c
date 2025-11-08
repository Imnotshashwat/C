#include <stdio.h>

int main()
{
    int i = 0;
    int a = 0;
    do
    {
        printf("the value of i is %d\n", ++i);
    } while (i<4);

    do
    {
        printf("the value of a is %d\n", a++);
    } while (a<4);
    
    return 0;
}