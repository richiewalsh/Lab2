#include "mbed.h"
#include <cstdio>

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
    while (true) {

    }
}

