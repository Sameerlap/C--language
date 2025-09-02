#include <stdio.h>
int main()
{
    printf("******Simple Interest Calculator******\n");
    float rate, time, principal, interest;
    printf("Enter principal amount:");
    scanf("%f", &principal);
    printf("Enter rate of intereset:");
    scanf("%f", &rate);
    printf("enter time in years:");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest is:%.2f", interest);

    return 0;
}
