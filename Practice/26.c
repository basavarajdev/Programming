
#include <stdio.h>

int addition(int *arr, int size) {

	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += arr[i];

	return sum;
}

int main(void) {

	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr)/sizeof(arr[0]);

	printf("sum = %d \n", addition(arr, size));

	return 0;
}
	
