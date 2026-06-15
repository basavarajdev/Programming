
#include <stdio.h>


int main(void) {

    printf("size of variables \n"
            "1. char = %ld bytes \n"
            "2. int = %ld bytes \n"
            "3. short int = %ld bytes \n"
            "4. double = %ld bytes \n"
            "5. float = %ld bytes \n"
            "6. long = %ld bytes \n"
            "7. long long = %ld bytes\n"
            "8. long double = %ld bytes \n", sizeof(char), sizeof(int), sizeof(short int),
            sizeof(double), sizeof(float), sizeof(long), sizeof(long long), sizeof(long double));

    return 0;
}
