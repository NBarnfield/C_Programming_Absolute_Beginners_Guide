// Example program #3 from Chapter 9 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter9ex3.c

/* This program calculates the average of four grades and also does
some other basix math. */

#include <stdio.h>

main()
{

    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    /* The student got 88s on the first and third test,
    so a multiple assignment statement works. */

    grade1 = grade3 = 88;

    grade2 = 79;

    // The user needs to enter the fourth grade
    printf("What grade did you get on the fourth test");
    printf(" (An integer between 0 and 100)?");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4)/4;


    printf("Your average grade is %.1f.\n", averageGrade);


    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * (gradeDelta / 95);//((95-averageGrade) / 95);
    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (95) \n");
    printf("You are %.1f percent behind ", percentDiff);
    printf("that grade!\n\n\n");

    return 0;
}
