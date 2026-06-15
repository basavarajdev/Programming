
/* Pattern 1 */

/* 1
 * 1 2
 * 1 2 3
 * 1 2 3 4 
 * 1 2 3 4 5
 */

#include <stdio.h>

int main (void) {

    int num_of_lines;
    printf("Enter the number of lines \n");
    scanf("%d", &num_of_lines);

    int i, j;
    for (i = 1; i < num_of_lines; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


/* Pattern 2 */


