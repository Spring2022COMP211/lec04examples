#include<stdio.h>
#include<string.h>

int sum_array(int *values, int count);

int main() {

    int a[] = {1, 2, 3, 4, 5};

    int sum = sum_array(a, 5);
    printf("The sum of the integers in a: %d\n", sum);
    
    printf("Enter three numbers: \n");

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("You entered: %d %d %d\n", x, y, z);
}


int sum_array(int *values, int count) {
    int s=0;

    for (int i=0; i<count; i++) {
        s += values[i];
    }
    return s;
}



    
