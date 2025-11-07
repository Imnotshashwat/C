#include <stdio.h>

int main()
{
    // int length = 10;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    printf("THe area of this rectangle is %d\n", length * breadth);

    return 0;
}