
#include <stdio.h>

int main (void) {

	const volatile int a = 10;
	int *ptr = &a;

	*ptr = 20;
	printf("%d \n", *ptr);

	return 0;
}
