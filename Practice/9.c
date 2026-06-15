
#include <stdio.h>
#include <string.h>

int main (void) {

	char dest[10];
	char *src = "Hi How are you?";

	printf("%s \n", strcpy(dest, src));

	return 0;
}
