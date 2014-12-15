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

    return (EXIT_SUCCESS);
}

