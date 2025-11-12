// display a GP upto n

#include <stdio.h>

int main()
{
    float a;
    int n;

    printf("enter a starting number: ");
    scanf("%f",&a);
    printf("enter no: ");
    scanf("%d",&n);

    for (int i = 0; i<n; i++)
    {
        printf("%.2f ",a);
        a= a*1/2;
    }
    
    return 0;
}