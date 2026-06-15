
#include <stdio.h>

struct MAIN {
    
    union a {
        short int a;
        short int b;
    } A;

    union b {
        int c;
    } B;
};


int main (void) {

    struct MAIN A1;
    printf("size of struct = %ld \n", sizeof(A1));

    A1.B.c = 0xabcd1234;

    printf("a = %x \n", A1.A.a);
    printf("b = %x \n", A1.A.b);
    printf("c = %x \n", A1.B.c);

    printf("&a = %p \n", &(A1.A.a));
    printf("&b = %p \n", &(A1.A.b));
    printf("&c = %p \n", &(A1.B.c));

    return 0;
}
