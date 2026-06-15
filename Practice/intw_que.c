

#include <stdio.h>
#include <string.h>

union value {

	int i;
	char str[20];
};

int main(void) {

	union value val1;
	val1.i = 5;
	strcpy(val1.str, "GLOBAL");

	printf("%d \n", val1.i);
	printf("%s \n", val1.str);

	printf("%p \n", &val1);

	return 0;
}
	

