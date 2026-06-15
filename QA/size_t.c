
#include <stdio.h>
#include <string.h>

int main() {
    
    char *str = "Hello"; 
    size_t len = strlen(str);

    while (--len >= 0)
        printf("%d \n", len);
}
