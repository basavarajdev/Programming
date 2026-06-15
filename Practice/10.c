
#include <stdio.h>
#include <stdlib.h>

int main (void) {

	char *ptr;
	//char *ptr = (char *) malloc (sizeof(int));
	*ptr = 10;

	printf("value is %d \n", *ptr);

	free(ptr);

	*ptr = 20;
	printf("value is %d \n", *ptr);

	//free(ptr);
 	return 0;
}
