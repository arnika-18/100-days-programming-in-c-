Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
    int a, b, lcm, max;

    scanf("%d %d", &a, &b);

    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    lcm = max;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            break;
        }

        lcm++;
    }

    printf("%d", lcm);

    return 0;
}

