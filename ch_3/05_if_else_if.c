#include <stdio.h>

int main()
{
    int age = 5;

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age > 18)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can not drive\n");
    }

    return 0;
}