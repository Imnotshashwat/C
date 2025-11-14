// 1 1 2 3 5 8 13.....n terms

#include <stdio.h>

int main()
{
    int n, a = 1, b = 1, f = 1;

    printf("enter a no: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-2; i++)
    {
        f = a + b;
        a = b;
        b = f;

    }
    printf("the %dth term of fibonacci is %d\n ",n, f);
    
    return 0;
}
