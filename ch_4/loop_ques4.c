// print GP of n terms: 1 2 4 8 16......n

#include <stdio.h>

int main()
{
    int n, a = 1;
    printf("enter a no: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}