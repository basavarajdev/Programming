#include <stdio.h>

struct  XYZ {
    int x;
    float y;
    char z;
};

int main() {
/*
    struct XYZ arr[2];

    int sz = (char*)&arr[1] - (char*)&arr[0];

    printf("%d \n", sz); 
*/
    struct XYZ *temp;
    struct XYZ *temp2 = temp++;

    unsigned int size = (char *)temp - (char *)temp2;

    printf("%d \n", size);

    return 0;
}
