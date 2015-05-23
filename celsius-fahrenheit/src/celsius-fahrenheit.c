/*********************************************************
 * Print Celsius to Fahrenheit table.                    *
 *                                                       *
 * The temperature T in degrees Fahrenheit (°F)          *
 * is equal to the temperature T in degrees Celsius (°C) *
 * times 9/5 plus 32.                                    *
 *                                                       *
 *               T(°F) = T(°C) × 9/5 + 32            @BH *
 *********************************************************/
#include <stdio.h>
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("-- Cels | Fahr --\n");
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) +32;
        printf("-- %3.0f  | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

