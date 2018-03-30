// Example program #1 from Chapter 16 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter16ex1.c

/* This program will ask users to input test grades for the 25
students in a class and then compute an average test grade. If fewer
than 25 students took the test, the user can enter -1 as a grade
and break the loop, and only those entered grades will be used to
compute the average. */

#include <stdio.h>

main()
{
    // Declare variables and their data types
    int numTest;
    float stTest, avg, total = 0.0;

    // Asks for up to 25 tests

    for (numTest = 0; numTest < 25; numTest++)
    {
        // Get the test scores, and check if -1 was entered

        printf("\nWhat is the next student's test scores? ");
        scanf(" %f", &stTest);
        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }

    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);

    return 0;
}
