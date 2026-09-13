Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    scanf("%d", &n);

    if(n < 10)
    {
        printf("%d", n);
        return 0;
    }

    last = n % 10;

    digits = n;
    power = 1;

    while(digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
