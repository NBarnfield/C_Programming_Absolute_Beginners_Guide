// Example program #1 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex1.c

/* This program is nothing more than a simple demonstation of the
 * putchar() function. */

// putchar*( us defubed ub sdio.h. but string.h is needed for he
// strlen() function

#include <stdio.h>
#include <string.h>

main()
{
    int i;
    char msg[] = "C is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); //Outputs a single character
    }
    putchar('\n'); // One line break after the loop is done.

    return(0);
}

