
#include <stdio.h>

#if 0

int main(){

    char arr[7]="Network";
    arr[7] = 1;
    printf("%c \n", arr[6]);
    printf("%c \n", arr[7]);
    printf("%s \n", arr);

    return 0;
}

#endif 

#if 0 

int main() {

    int const SIZE = 5;
    int expr;
    double value[SIZE] = {2.0, 4.0, 6.0, 8.0, 10.0};  //error : variable sized indexes are not allowed
    expr = 1 | 2 | 3 | 4;

    printf("%f", value[expr]);

    return 0;
}

#endif

#if 0

enum power {
    Dalai,
    Vladimir = 3,
    Barack,
    Hillary
};

int main() {

    float leader[Dalai + Hillary] = {1.f, 2.f, 3.f, 4.f, 5.f};
    enum power p = Barack;
    
    printf("%0.f \n", leader[p >> 1 + 1]);

    return 0;
}

#endif

#if 0

#define var 3

int main() {

    char *cricket[var + ~0] = {"clarke", "kallis"};
    char *ptr = cricket[1 + ~0];
    
    printf("%c \n", *++ptr);

    return 0;
}

#endif

#if 0

int main() {

    char data[2][3][2] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };


    printf("%o \n", data[0][0][0]);
    printf("%o \n", data[0][0][1]);
    printf("%o \n", data[0][1][0]);
    printf("%o \n", data[0][1][1]);
    printf("%o \n", data[0][2][0]);
    printf("%o \n", data[0][2][1]);
    printf("%o \n", data[1][0][0]);
    printf("%o \n", data[1][0][1]);
    printf("%o \n", data[1][1][0]);
    printf("%o \n", data[1][1][1]);
    printf("%o \n", data[1][2][0]);
    printf("%o \n", data[1][2][1]);

    printf("%o \n", data[0][2][1]);
  
    return 0;
}

#endif

int main() {

    short num[3][2] = { 3, 6, 9, 12, 15, 18 };

    printf("%d  %d \n", *(num + 1)[1], **(num + 2));

    return 0;
}
