#include<stdio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int i=0; i<5; i++) {
        sum += a[i];
    }
    printf("Sum of integers in array a: %d\n", sum);

    // Reverse the array:
    
    for (int i=0; i<5/2; i++) {
        int tmp = a[i];
        a[i] = a[4-i];
        a[4-i] = tmp;
    }

    printf("My array now: %d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);

}

