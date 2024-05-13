#include "mbed.h"
#include <cstdio>

// Assign first two values in sequence so it can be started
int n1 = 0;
int n2 = 1;
// set how many numbers in the sequence are desired
int n = 10;

// main() runs in its own thread in the OS
int main()
{
    
    printf("The fibonacci sequence for n = %d is: %d, %d,", n, n1, n2);
    // for loop to complete n values
       for(int i = 2; i < n; i++){
           // get next therm by adding the last two
           int n3 = n1 + n2;
           printf(" %d,", n3);
           // assign values of n1 and n2 as the next respective values in sequence 
           n1 = n2;
           n2 = n3;
        }
        printf("\r\n");
    while (true) {
    //do not run from here as loop continues indefinately
    }
}

