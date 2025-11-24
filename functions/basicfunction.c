#include <stdio.h>
void greet()
{
    printf("Hello World\n");
    return;
}
void kala()
{
    printf("kala function\n");
    return;
}

int main()
{
    greet(); // function call
    kala();
    for (int i = 0; i < 6; i++)
    {
        greet();
    }

    return 0;
}