#include <stdio.h>
int main()
{
    float Centigrade, Fahrenheit;
    printf("Enter temperature in centigrade:");
    scanf("%f", &Centigrade);
    Fahrenheit = (Centigrade * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %.2f\n", Fahrenheit);
    // %.2f is used to display the result up to 2 decimal places
    return 0;
}