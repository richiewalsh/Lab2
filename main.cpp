#include "mbed.h"
#include <cstdio>

// set how many numbers in the sequence are desired
int n = 10;

//function is recursive as it calls itself
int fib(int n){
//This sets the basis for every subsequent value in the sequence. 
if(n == 0 || n == 1){
    //first 2 values are themselves so return the input
    return n;
}
else{
    //work way through sequence until values of fib(n-1) and fib(n-2) are known and then add together
    return(fib(n-1) + fib(n-2));
}

}

// main() runs in its own thread in the OS
int main()
{
    
        printf("The fibonacci sequence for n = %d is: ", n);
       for(int i = 0; i < n; i++){

        printf("%d, ", fib(i));

        }
        printf("\r\n");
    while (true) {
    //do not run from here as loop continues indefinately
    }
}

