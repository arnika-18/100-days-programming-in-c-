//write a program to convert temperature from celsius to fahrenheit.

#include <stdio.h>
int main()
{
float celsius, fahrenheit;
scanf("%f", &celsius);
fahrenheit = (9.0 / 5.0) * celsius + 32;
printf("Fahrenheit=%.0f", fahrenheit);
return 0;
}


