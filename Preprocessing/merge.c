
#include <stdio.h>

#define merge(a, b) a##b

int main(void) {
	
	printf("%d ", merge(12, 34));

	return 0;
}
