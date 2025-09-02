#include <stdio.h>
#include <math.h>
int main()
{
    int radius, height;
    float pi = 3.14, Volume;
    printf("Enter the radius of the cylinder:");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder:");
    scanf("%d", &height);
    Volume = pi * radius * radius * height;
    printf("Volume of cylinder is %.2f", Volume);
    return 0;
}