
#include <stdio.h>

unsigned char countSetBits(unsigned int num) {

	unsigned int count = 0;
	while (num) {
		count += num & 1;
		num >>= 1;
	}
	return count;
}

int main (void) {

	unsigned int number;
	unsigned int set_bits;

	printf("Enter the number\n");
	scanf("%d", &number);

	set_bits = countSetBits(number);
	printf("Number of set bits = %d \n", set_bits);

	return 0;
}
