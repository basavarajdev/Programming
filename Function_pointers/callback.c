
/* Simple program to demonstrate callback */

#include <stdio.h>

void func1() {
	printf("I am in function 1 \n");
}

void func2(void (*ptr)()) {
	(*ptr)();  // callback to func1
}

int main(void) {

	void (*ptr)() = &func1;
	func2(ptr);

	return 0;
}

