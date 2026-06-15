
#include <stdio.h>

struct employee {

	int emp_id;
	int name;
	int height;
};

int main(void) {

	struct employee emp1;

	printf("Size of atructure = %d \n", sizeof(struct employee));

	emp1.emp_id = 450;
//	emp1.name = "Arun";


	printf("employee id = %d \n", emp1.emp_id);
//	printf("Name = %s \n", emp1.name);

	return 0;
}
