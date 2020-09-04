#include <stdio.h>
#define BOILING_POINT 32.0f
#define CONVERSION (5.0f / 9.0f)
int main(void)
{
    float celsius, fahrenheit;
    printf("Enter fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - BOILING_POINT) * CONVERSION;
    printf("Celsius: %.1f",celsius);

    return 0;
}