
#include <stdio.h>

#define get(a) #a

int main(void) {

	printf("%s ", get(GeeksQuiz));
	return 0;
}
