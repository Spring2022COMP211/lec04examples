#include<stdio.h>
#include<stdlib.h>

int main() {

    int i = 100;
    int *ip = &i;

    printf("Value of i: %d\n", i);
    printf("Value of &i: %p\n", &i);
    printf("Value of ip: %p\n", ip);
    printf("Value of *ip: %d\n", *ip);

    *ip = -42;

    printf("After *ip = -42...\n");
    printf("Value of i: %d\n", i);
    printf("Value of &i: %p\n", &i);
    printf("Value of ip: %p\n", ip);
    printf("Value of *ip: %d\n", *ip);

    // Below is dangerous because there is no check
    // on whether value of pointer is valid.
    
    ip = (int *) 0x345320;  // Setting pointer to random address
    
    // Dereferencing pointer to get to value may crash
    // if that address is not allocated to my program or
    // if address is invalid in some way.
    
    printf("Feeling lucky: %d\n", *ip);

}


