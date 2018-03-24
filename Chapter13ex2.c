// Example program #2 from Chapter 13 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter13ex2.c

/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. However, it uses the increment
and decrement operators. */

#include <stdio.h>

main()
{
    // Declare an integer variable named ctr and set it to 0.
    int ctr = 0;

    // Use an increment operator to increase the value by one up to the value of 5.
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);

    // Use an increment operator to decrease down to the value of 1.
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);

    return 0;
}
