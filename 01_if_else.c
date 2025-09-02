#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you are eligible for vote\n");
        printf("Thank you\n");
    }
    else
    {
        printf("you are not eligible for vote\n");
        printf("Thank you\n");
    }
    return 0;
}