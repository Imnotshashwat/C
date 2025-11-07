#include <stdio.h>

int main()
{
    int r = 5;
    int h = 9;
    printf("The area of a circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of a cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}