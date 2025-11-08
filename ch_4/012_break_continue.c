#include <stdio.h>

int main()
{
    for (int i = 0; i< 15; i++)
    {
        if (i==5)  // check if i is 5
        {
            // break;  //  completely exit the loop when i is 5
            continue; // skip this iteration when i is 5  (will not include 5 in output)
        }
        
        printf("%d\n", i);
    }
    printf("Loop exited using break statement.\n");
    
    return 0;
}