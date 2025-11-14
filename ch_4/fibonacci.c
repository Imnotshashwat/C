// 1 1 2 3 5 8 13.....n terms

#include <stdio.h>

int main()
{
    int n, a = 1, b = 1;

    printf("enter a no: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("the %dth term of fibonacci is %d\n", i, (i == 1 || i == 2) ? 1 : a + b);
        if (i > 1)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }
    }
    
    return 0;
}
