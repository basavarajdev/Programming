
#include <stdio.h>

int increment (int val) {
    val++;
    return val;
}

int main (void) {

    static int val;
    printf("Value of val = %d \n", val);

    val = increment(val);

    printf("Value of val = %d \n", val);
    return 0;
}

