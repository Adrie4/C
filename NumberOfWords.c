/* 
 * File:   NumberOfWords.c
 * Author: Owner
 *
 * Created on December 14, 2014, 4:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
            // Variable
        int number;

        //Get number from user
        printf("Please enter a number from 10 to 99 in digit representaion:");
        scanf( "%d", & number);

        if (number >= 10 && number <= 19) {
            teens(number);
        } else {
            hundreds(number);
            tens(number);
            ones(number);
        }
    }


teens(int number) {

        switch (number) {


            case 10:
                printf ("Ten");
                break;
            case 11:
                printf ("Eleven");
                break;
            case 12:
                printf ("Twelve");
                break;
            case 13:
                printf ("Thirteen");
                break;
            case 14:
                printf ("Fourteen");
                break;
            case 5:
                printf ("Fifteen");
                break;
            case 6:
                printf ("Sixteen");
                break;
            case 7:
                printf ("Seventeen");
                break;
            case 8:
                printf ("Eightteen");
                break;
            case 9:
                printf ("Nineteen");
                break;
        }

    }

 tens(int number) {

        int tens = (number / 10) % 10;

        switch (tens) {
            case 2:
                printf ("Twenty");
                break;
            case 3:
                printf ("Thirty");
                break;
            case 4:
                printf ("Fourty");
                break;
            case 5:
printf ("Fifty");
                break;
            case 6:
                printf ("Sixty");
                break;
            case 7:
                printf ("Seventy");
                break;
            case 8:
printf ("Eighty");
                break;
            case 9:
printf ("Ninety");
                break;
        }

    }


hundreds(int number) {

        int hundreds = (number / 100) % 10;


        switch (hundreds) {
            case 1:
printf ("One Hundred");
                break;
            case 2:
printf ("Two Hundred");
                break;
            case 3:
                printf ("Three Hundred");
                break;
            case 4:
                printf ("Four Hundred");
                break;
            case 5:
printf ("Fiiv Hundred");
                break;
            case 6:
printf ("Six Hundred");
                break;
            case 7:
                printf ("Seven Hundred");
                break;
            case 8:
              printf ("Eight Hundred");
                break;
            case 9:
                printf ("Nine Hundred");
                break;
        }

    }

 ones(int number) {

        int ones = number % 10;

        switch (ones) {

            case 1:
                printf ("one");
                break;
            case 2:
printf ("two");
                break;
            case 3:
                printf ("three");
                break;
            case 4:
                printf ("four");
                break;
            case 5:
printf ("five");
                break;
            case 6:
printf ("six");
                break;
            case 7:
printf ("seven");
                break;
            case 8:
printf ("eight");
                break;
            case 9:
printf ("nine");
                break;
        }

    }


    


