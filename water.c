#include <cs50.h>
#include <stdio.h>

/*Implement a program that reports a user’s water usage, 
converting minutes spent in the shower to bottles of drinking water.*/

int main(void){
    
    int minutes;
    int bottles;
    do { 
        
    printf("Enter minutes spent in the shower: ");
    
    minutes = GetInt();
   
    } while (minutes < 0);
    
    /*12 bottles of water used per minute of shower*/
    
    bottles = minutes * 12;
   
    printf("Bottles of water used in shower: %i\n", bottles);
    
    
}