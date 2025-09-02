#include <stdio.h>
int main()
{
    int income, age;
    int has_license = 0; // 0 means false, 1 means true
    // get user data
    printf("Welcome to the Credit Card Eligibility Checker\n");
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your monthly income (in thousands):");
    scanf("%d", &income);
    printf("Do you have a driving license? (1 for yes, 0 for no):");
    scanf("%d", &has_license);
    // Logical AND operator (&&)
    if (age >= 18 && income >= 50000)
    {
        printf("Congratulation,you are eligible for premium credit card\n");
        printf("Thank you\n");
    }
    // logical OR operator (||)
    else if (age >= 18 || income >=25000  )
    {
        printf("Congratulation, you are eligible for regular credit card\n");
        printf("Thank you\n");
    }
    // logical NOT operator (!)
    else if (!has_license)
    {
        printf("Warning: you must have a driving license to apply for a credit card\n");
        printf("Thank you\n");
    }

    else
    {
        printf("Sorry, you are not eligible for a credit card\n");
        printf("thank you\n");
    }
    return 0;
}