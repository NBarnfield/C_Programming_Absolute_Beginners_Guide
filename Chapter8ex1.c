// Example program #1 fro, Chapter 8 of Absolute Beginner's Guide to
// C, 3rd edition
// file Chapter8ex1.c

/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered */

#include <stdio.h>

main()
{
// Set up the variables that scanf will fill

char firstInitial;
char lastInitial;
int age;
int favourite_number;

// Print a question and expect a character to be entered
printf("What letter does your first name begin with?\n");
scanf(" %c", &firstInitial);

// Print a question and expect a character to be entered
printf("What letter does your last name begin with?\n");
scanf(" %c", &lastInitial);

// Print a question and expect an integer to be entered
printf("How old are you?\n");
scanf(" %d", &age);

// Print a question and expect an integer to be entered
printf("What is your favourite number (integer only)?\n");
scanf(" %d", &favourite_number);


// Print a statement and expect a character to be entered
printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
printf("\nYour favourite number is %d.\n\n", favourite_number);

// Close program.
return 0;
}
