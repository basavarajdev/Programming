
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
    char *name;
    int age;
    unsigned int salary;
}EMPLOYEE;


int main(void) {

    EMPLOYEE emp1;
    printf("sizeof struct = %ld \n", sizeof(emp1));

    //emp1.name = "Rahul";
    strcpy(emp1.name, "Rahul");
    emp1.age = 24;
    emp1.salary = 15000;

    printf("EMP 1 : name = %s   age = %d    salary = %d \n", emp1.name, emp1.age, emp1.salary);

    printf("Addresses EMP 1 : name = %p   age = %p    salary = %p \n", &emp1.name, &emp1.age, &emp1.salary);

    return 0;
}
