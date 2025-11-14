#include <stdio.h>

int main()
{
    int a, b;
    int power=1;

    printf("enter base: ");
    scanf("%d",&a);

    printf("enter power: ");
    scanf("%d",&b);
    
    for (int i = 1; i <=b; i++)
    {
        power=power*a;
        printf("the %d to the power %d is %d\n",a,i,power);
    }
    
    return 0;
}