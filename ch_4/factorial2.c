#include <stdio.h>

int main()
{
    int n, f = 1;

    printf("enter a no: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
        printf(" the factorial %d is: %d\n",i, f);
        
    }

    return 0;
}
