#include "mbed.h"

/*
next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1.
These programmes use both recursive and simple loops to produce and print the Fibonacci sequence on coolterm. 
Initialising communication to print the sequence through a serial terminal is done by the Serial object. 
The "for loop" method computes terms using a loop, beginning with 0 and printing each term until n terms are reached. 
The recursive method adds and prints terms iteratively, beginning with 0 and printing up to "n" terms, using an aid function.
*/
// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 10;


int fib(int n){
    // inp: position of the fib sequence
    // out: the number in that sequence
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return(fib(n-1) + fib(n-2));
}

int main()
{
     printf("Finbonachi series loop: %d, %d,", t_1, t_2);
    for(int i=2; i<max_terms; i++){
         next_term = t_1 + t_2;
         printf("%d, ", next_term);
         t_1 = t_2;
         t_2 = next_term;
     }
     printf("\r\n");

    printf("Finbonachi series recursive:");
    for(int i=0; i<max_terms; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");
    
    while (true) {

    }
}



