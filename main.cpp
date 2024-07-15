#include "mbed.h"
#include <cstdio>

/*
next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1.
*/
// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 10;


int main()
{
    printf("Finbonachi series loop: %d, %d,", t_1, t_2);
    //for loop
    for(int i=0; i<max_terms; i++){
         next_term = t_1 + t_2;
         printf("%d, ", next_term);
         t_1 = t_2;
         t_2 = next_term;
     }
     printf("\r\n");
     printf("Simple Loop");

    
    while (true) {

    }
}



