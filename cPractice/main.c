#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    celsius = lower;
    printf("Celsius to Fahrenheit Table\n");
    printf("===========================\n");
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0/5.0) + 32);
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
