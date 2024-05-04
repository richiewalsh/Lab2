#include "mbed.h"
#include <cstdio>

//Error : Called object type 'int' is not a function or function pointer clang(typecheck_call_not_function)[Ln24, Col4]

int i = 0;
int j = 1;
int k = 0;

int fib(int n){

if(i == n){

    return i;

}
else{

int fib = j + k;
printf(fib);
j = k;
k = fib;
i = i + 1;
fib(i);

}

}

// main() runs in its own thread in the OS
int main()
{
    while (true) {

    }
}

