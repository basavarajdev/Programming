
#include <stdio.h>
#include <stdlib.h>
static int *p;
 
int main(void)
{
	p = (int *) malloc(sizeof(p));
    *p = 10;
    printf("%d", *p);
}
