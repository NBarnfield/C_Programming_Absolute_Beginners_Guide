// Example program #1 from Chapter 14 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter14ex1.c

/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. However, it uses while loops and
the increment and decrement operators. */

#include <stdio.h>

main()
{
    int ctr = 0;

    while (ctr < 5)
    {
        printf("Counter is at %d.\n", ++ctr);
    }
    while (ctr > 1)
    {
        printf("Counter is at %d.\n", --ctr);
    }

    return 0;
}
