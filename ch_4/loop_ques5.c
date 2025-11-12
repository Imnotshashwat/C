// display this AP 100 97 94....upto all terms which are positive

#include <stdio.h>

int main()
{
    int a;
    int n;
    printf("enter a no from which you wanna start: ");
    scanf("%d", &a);
    printf("enter a difference:" );
    scanf("%D",&n);

    for (int i = 0; a > 0; i++)
    {
        printf("%d ", a);
        a = a - n;
    }

    return 0;
}