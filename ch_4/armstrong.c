#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    for (int num = 1; num <= 500; num++)
    {
        int original = num;
        int sum = 0;
        int digits = 0;
        
        // Count number of digits
        int temp = num;
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
        
        // Calculate sum of each digit raised to power of number of digits
        temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += power(digit, digits);
            temp /= 10;
        }
        
        // Check if Armstrong number
        if (sum == original)
        {
            printf("%d\n", num);
        }
    }
    
    return 0;
}