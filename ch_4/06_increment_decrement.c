#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // prints 5
    // i = i + 5; // 10
    printf("The value of i is %d\n", i = i + 5); // prints 10, then i becomes 10
    // i++; // 11
    printf("The value of i is %d\n", i++); // prints 10, then i increments to 11 (post-increment)
    printf("The value of i is %d\n", i--); // prints 10, then i decrements to 10 (post-decrement)
    // ++i; // 12
    printf("The value of i is %d\n", ++i); // i increments to 12, then prints 12 (pre-increment)
    printf("The value of i is %d\n", --i); // i decrements to 11, then prints 11 (pre-increment)

    return 0;
}