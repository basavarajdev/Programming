
#include <stdio.h>
int main()
{
    struct site
    {
        char name[10];
        int no_of_pages;
    };

    struct site *ptr;
	ptr -> name = "Geeks";
	ptr -> no_of_pages = 10;
    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);
    getchar();
    return 0;
}
