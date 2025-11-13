#include <stdio.h>

int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("the given no is composite\n");
            break;
        }
        
    }
    
    return 0;
}