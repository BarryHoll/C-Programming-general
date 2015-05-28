/*********************************************************
 * Print Celsius to Fahrenheit table.                    *
 * Version 2 uses a for statement                        *
 *                                                       *
 * The temperature T in degrees Fahrenheit (°F)          *
 * is equal to the temperature T in degrees Celsius (°C) *
 * times 9/5 plus 32.                                    *
 *                                                       *
 *               T(°F) = T(°C) × 9/5 + 32            @BH *
 *********************************************************/
#include <stdio.h>

#define LOWEST 0
#define HIGHEST 300
#define INCREMENT 20

int main()
{
    int celsius;
    printf("-- Cels | Fahr --\n");
    for(celsius = LOWEST; celsius <= HIGHEST; celsius = celsius + INCREMENT) {
        printf("-- %3d  | %6.1f\n", celsius, (celsius * (9.0/5.0)) +32);
    }

    printf("\n-- Reverse Order --\n");
    for(celsius = HIGHEST; celsius >= LOWEST; celsius = celsius - INCREMENT) {
        printf("-- %3d  | %6.1f\n", celsius, (celsius * (9.0/5.0)) +32);
    }
}
