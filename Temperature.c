/* 
 * File:   Temperature.c
 * Author: Owner
 *
 * Created on December 14, 2014, 4:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
            

        String[] dayOfTheWeek = new String[7];

        dayOfTheWeek[0] = "Sunday";
        dayOfTheWeek[1] = "Monday";
        dayOfTheWeek[2] = "Tuesday";
        dayOfTheWeek[3] = "Wednesday";
        dayOfTheWeek[4] = "Thursday";
        dayOfTheWeek[5] = "Friday";
        dayOfTheWeek[6] = "Saturday";

        int[] temperature = new int[7];

        for (int day = 1; day <= 7; day++) {
            printf("Please Enter the temperature for " + dayOfTheWeek[day - 1] + " : ");
            scanf(%d, &temperature[day - 1]);
        }

        System.out.println("----RESULTS-----");
        int indexOfMax = 0;
        for (int day = 1; day <= 7; day++) {
            if (temperature[day - 1] > temperature[indexOfMax]) {
                indexOfMax = day - 1;
            }
            printf("Temperature for " + dayOfTheWeek[day - 1] + " : " + temperature[day - 1] + "\n");
        }

    return (EXIT_SUCCESS);
}

