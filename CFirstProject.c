/* 
 * File:   newmain.c
 * Author: Owner
 *
 * Created on December 11, 2014, 11:16 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {


        int menuNum;
        int ret;


        printf("1 = IF Statement:PH Level | 2 = Loops:Fibonacci Series| 3 = Array:Temperature| 4 = Methods:Number to Words ");
        printf("Please enter a number for what you would like to see:");
        scanf( "%d", & menuNum);

        switch (menuNum) {


            case 1:
               ret =  ifStatement();
                break;
            case 2:
               ret= loops();
                break;
            case 3:
               ret =  arrays();
                break;
            case 4:
                ret =  methods();
                break;



}

void ifStatement(){

    //Variables
        double pH;
        
        printf("Acid Rain\n");
        printf("Acid Rain is an enviromentmatal problem. This program determines if the pH level in water is safe for fish.");


        printf(" \nEnter pH level:");
        scanf( "%d", & pH);
        
        
         if( pH < 0 | pH > 14 ) {
            printf( "ERROR");
        }
        else if(pH < 6.5) {
            printf("TOO ACIDIC - FISH IN STREAMS, RIVERS AND LAKES WILL NOT SURVIVE.");
        } else if (pH > 7.5) {
            printf("TOO ALKALINE - FISH IN STREAMS, RIVERS AND LAKES WILL NOT SURVIVE");
        } else {
            printf("NEUTRAL - FISH IN STREAMS, RIVERS AND LAKES WILL SURVIVE.");
        }

}

void loops(){

    //Variables
        int a;
        int b;
        int c = 0;

        a = 1;
        b = 1;

        // Print backround information

        printf("This program will print the first twenty terms of the Fibonacci series using a loop. ");


        // Deterime first twenty terms of the Fibonacci series
        int counter;
        for (counter = 1; counter <= 20; counter = counter + 1) {

            a = b;
            b = c;
            c = (a + b);

            printf("%d\n",c);

}


void arrays(){
 const char *dayOfTheWeek[7];

        dayOfTheWeek[0] = "Sunday";
        dayOfTheWeek[1] = "Monday";
        dayOfTheWeek[2] = "Tuesday";
        dayOfTheWeek[3] = "Wednesday";
        dayOfTheWeek[4] = "Thursday";
        dayOfTheWeek[5] = "Friday";
        dayOfTheWeek[6] = "Saturday";

        int temperature[7];
        
        int day;
        for (day = 0; day <= 6; day = day + 1) {
            printf( "Please Enter the temperature for " , dayOfTheWeek[day] , " : ");
            scanf("%d", temperature[day]);
        }

        printf("----RESULTS-----\n");
        int indexOfMax = 0;
       
        for (day = 0; day <= 8; day = day + 1) {
            if (temperature[day] > temperature[indexOfMax]) {
                indexOfMax = day;
            }
            printf("Temperature for ",  dayOfTheWeek[day] , " : " ,temperature[day]);
        }

}

void methods(){
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

void teens(int number) {

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

void tens(int number) {

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


void hundreds(int number) {

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

 void ones(int number) {

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
 
} 
return (EXIT_SUCCESS);
 }