// Example program #1 from Chapter 17 of Absolute Beginner's Guide
// To C, 3rd Edition
// File Chapter17ex1.c

/* This proram presents a menu of choices, gets the user's choice,
and then uses the switch statement to execute a line or two of code
based on that choice. What the user wants to do is not truly
implemented - it is just a series of stubs to teach the value of the
switch statement. */

#include <stdio.h>
#include <stdlib.h>

main()
{
    int choice;

    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");

    do
    {

        printf("Enter your choice: ");
        scanf(" %d", &choice);
        switch (choice)
        {
            case (1): printf("\nTo add you will need the contact's\n");
                      printf("first name, last name, and number.\n");
                      break;

            case (2): printf("\nGet ready to enter the name of the");
                      printf("contact you wish to change.\n");
                      break;

            case (3): printf("\nWhich contact do you wish to call?\n");
                      break;

            case (4): printf("\nWhich contact do you wish to text?\n");
                      break;

            case (5): exit(1); //Exits the program early

            default: printf("\n%d is not a valid choice.\n", choice);
                     printf("Try again.\n");
                     break;
        }

    } while ((choice < 1) || (choice > 5));

    return 0;
}
