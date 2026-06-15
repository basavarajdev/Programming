
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *ptr;
    ptr = (char *) malloc(10);

    ptr = "Hello";

    printf("*ptr = %c \n", *ptr);

    free(ptr);

    printf("*ptr = %c \n", *ptr);

    free(ptr);

    return 0;
}

