
#include <stdio.h>

char * my_strstr(const char *str, const char *target) {
	if (!*target) return str;
  	char *p1 = (char*)str;
  	while (*p1) {
    		char *p1Begin = p1, *p2 = (char*)target;
    		while (*p1 && *p2 && *p1 == *p2) {
      			p1++;
      			p2++;
    		}
    		if (!*p2)
      			return p1Begin;
    		p1 = p1Begin + 1;
  	}
  	return NULL;
}

int main(void) {

	char s1[] = "Fun with width STL";
    	char s2[] = "wi";

	char *p;

	p = my_strstr(s1, s2);

	if (p) {
        	//strcpy(p, "Strings");
        	printf("%s", p);
    	} else
        	printf("String not found\n");

	return 0;
}
