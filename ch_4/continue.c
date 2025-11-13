// print the odd no using continue statement

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       if (i%2==0)
       {
        continue;  // skip the even numbers
       }
       // if (i % 2 != 0) // odd numbers
            printf("%d ", i);
    }

    return 0;
}