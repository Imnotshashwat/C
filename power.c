#include <stdio.h>

int main()
{
    int p, c, a = 1;
    printf("Enter a cofficient: ");
    scanf("%d", &c);

    printf("Enter the power: ");
    scanf("%d", &p);

    for (int i = 1; i <= p; i++)
    {
        a = a * c;
    }
    printf("%d", a);
    return 0;
}