#include <stdio.h>
void add()
{
    int result, a, b;
    printf("enter two no: ");
    scanf("%d%d", &a, &b);
    result = a + b;
    printf("%d", result);
}
void sub()
{
    int result, a, b;
    printf("enter two no: ");
    scanf("%d  %d", &a, &b);
    result = a - b;
    printf("%d", result);
}
void multi()
{
    int result, a, b;
    printf("enter two no: ");
    scanf("%d%d", &a, &b);
    result = a * b;
    printf("%d", result);
}
void div()
{
    float result, a, b;
    printf("enter two no: ");
    scanf("%f%f", &a, &b);
    result = a / b;
    printf("%.2f", result);
}

int main()
{
    int ch;
    printf("press 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\n 0 for exit");
    while (1)
    {

        printf("\n\nenter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            multi();
            break;

        case 4:
            div();
            break;

        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Input! Try again\n");
        }
    }
    return 0;
}