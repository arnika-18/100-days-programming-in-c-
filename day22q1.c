Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int n, original, digit, factorial, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        factorial = 1;

        for(int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}
