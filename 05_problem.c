#include <stdio.h>
int main()
{
    int radius;
    float pi = 3.14;
    printf("Enter the radius of the circle:");
    scanf("%d", &radius);
    printf("Area of circle is %.2f", pi * radius * radius);
    return 0;
}