
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char *dest;
    dest = (char *)malloc(sizeof(char));

    strcpy(dest, "Hello");

    printf("%s \n", dest);

    return 0;
}
