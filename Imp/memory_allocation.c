
#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int row = 5, col = 4;
    int *arr = (int *) malloc(row * col * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i < row; i ++)
        for(j = 0; j < col; j++)
            *(arr + i * col + j) = ++count;

    printf("%p \n", arr);

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            printf("%d at %p \n", *(arr + i * col + j), (arr + i * col + j));

	return 0;
}
