#include<stdio.h>
#include<string.h>

int main() {
    char a[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    printf("strlen(a): %d\n", (int) strlen(a));
    printf("Insert my string here: %s\n", a);

    a[0] = 'H';
    a[1] = 'i';
    a[2] = '!';
    a[3] = '\0';

    printf("strlen(a): %d\n", (int) strlen(a));
    printf("Insert my string here: %s\n", a);

    char *b = "This is my string";
    printf("strlen(b): %d\n", (int) strlen(b));
    printf("Insert my string here: %s\n", b);

    // This won't work:
    // b[0] = 'H';

    char string_array[3][10];

    printf("Enter three words (shorter than 10 characters):\n");

    for (int i=0; i<3; i++) {
        scanf("%s", string_array[i]);
    }

    printf("You entered:\n");
    for (int i=0; i<3; i++) {
        printf("%s\n", string_array[i]);
    }
    
}

