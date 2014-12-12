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

      //Variables
        double pH;
        
        printf("Acid Rain\n");
        printf("Acid Rain is an enviromentmatal problem. This program determines if the pH level in water is safe for fish.");
        printf(" \nEnter pH level:");
        scanf( "%d", & pH);
        
        
         if( pH < 0 || pH > 14 ) {
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

