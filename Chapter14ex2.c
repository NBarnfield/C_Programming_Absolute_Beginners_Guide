// Example program #2 from Chapter 14 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter14ex2.c

/* This program will multiply two numbers and display the result for
as long as the user wants. Answering 'N' will break the loop. */

#include <stdio.h>

main()
{
    // Create three floats and a character variable
    float num1, num2, result;
    char choice;

    do{
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);

        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);

        result = num1 * num2;

        printf("%.2f times %.2f equals %.2f.\n\n", num1, num2, result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N): ");
        scanf(" %c", &choice);
        // If the users enters a lowercase n, this if statement will
        // convert it to an N
        if (choice == 'n')
        {
            choice = 'N';
        }
    } while (choice != 'N');

    return 0;
}
