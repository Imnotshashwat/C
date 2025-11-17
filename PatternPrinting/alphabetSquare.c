#include <stdio.h>

int main()
{
    int n, m;
    printf("enter no of rows: ");
    scanf("%d", &m);
    printf("enter no of coloumns: ");
    scanf("%d", &n);

    for (int i = 1; i <= m; i++)
    {
        int a = 65; // ASCII value of 'A'
        for (int j = 1; j <= n; j++)
        {
            char ch = (char)a;
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}