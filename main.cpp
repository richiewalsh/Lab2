#include "mbed.h"
#include <cstdio>

int n = 10;

int fib(int n){

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
/*
        //return values for all numbers in fibonacci sequence until n value is reached
        for(int i = 0; i < n; i++){

        printf("%d, \r\n", fib(i));

        }*/

    }
}

