
/* code with memory leak */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char *ptr = malloc(10);
	getchar();
	free(ptr); 
    return 0;
}
