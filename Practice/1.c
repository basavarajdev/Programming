#include <stdio.h>

int main()
{
       int *ptr;
       *ptr = 0x1234;
       *ptr = 20;
       printf("%d\n", *ptr);
       return 0;
}
