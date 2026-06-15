
#include <stdio.h> 
int main(void)
{
    const int i = 0;   
    int j = 20;
    const int *ptr = &i;    /* ptr is pointer to constant */
  
    printf("ptr: %d\n", *ptr); 
    //*ptr = 100;        /* error: object pointed cannot be modified
    //                 using the pointer ptr */
  
    ptr = &j;          /* valid */
//	*ptr = 100;
    printf("ptr: %d\n", *ptr);
  
    return 0;
}


