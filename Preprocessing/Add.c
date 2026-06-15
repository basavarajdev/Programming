#include <stdio.h>

#define ADD(x)  x*x

int main() {

	int i = 5;
	
	printf("%d \n", ADD(++i));

	return 0;
}
