/* 
 * File:   FS.c
 * Author: Owner
 *
 * Created on December 14, 2014, 4:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Variables
        int a;
        int b;
        int c = 0;

        a = 1;
        b = 1;

        // Print backround information

        printf("This program will print the first twenty terms of the Fibonacci series using a loop. ");


        // Deterime first twenty terms of the Fibonacci series

        for (int counter = 1; counter <= 20; counter++) {

            a = b;
            b = c;
            c = (a + b);

            printf(c);

    return (EXIT_SUCCESS);
}

