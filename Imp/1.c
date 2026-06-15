#include <stdio.h>

#if 0

int main() {

    int a = 5;
    int *p = &a;
    printf("%p \n", p);
    printf("%d %d \n", *p++, a);
    printf("%p \n", p);

    return 0;
}

#endif 

int main() {

    int a= 5;
    int *p= &a;
    *p++;
    p--;
    printf("%d %d \n", *p, a);

    return 0;
}
