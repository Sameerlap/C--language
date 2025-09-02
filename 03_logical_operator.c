#include <stdio.h>
int main()
{
    printf("===== Student Grade and Scholarship Eligibility Checker =====\n");
    float marks, attendance;
    int sport_participation = 0; // 0 means false, 1 means true.
    // get user data
    printf("Enter your marks (out of 100):");
    scanf("%f", &marks);
    printf("Enter your attendance in percentage:");
    scanf("%f", &attendance);
    printf("Do you participate in sports? (1 for yes, 0 for no):");
    scanf("%d", &sport_participation);
    // logical AND operator (&&)
    if (marks >= 90 && attendance >= 75 && sport_participation == 1)
    {
        printf("Congratulation: Grade A+.\n You are eligible for scholarship:\n");
        printf("Thank you\n");
    }
    // logical OR operator (||)
    else if ((marks >= 75 || attendance >= 60) && sport_participation == 1)
    {
        printf("Congratulation: Grade A.\n You are eligible for sports scholarship:\n");
        printf("Thank you\n");
    }
    else if ((marks > 55 || marks < 75) || (attendance > 50 && sport_participation == 1))
    {
        printf("Congratulation: Grade B.\n You are eligible for scholarship:\n");
        printf("You need to improve your performance:\n");
        printf("Thank You\n");
    }
    else if (marks > 40 || attendance < 60 || !sport_participation == 0)
    {
        printf("Warning: Need improvement in Marks and/or attendance and also sports!\n");
        printf("Thank you\n");
    }
    else
    {
        printf("sorry, you are not eligible for scholarship:\n");
        printf("Thank you\n");
    }
    return 0;
    /* code */
}