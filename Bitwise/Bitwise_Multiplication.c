
/* This program multiplicates the given number by 2, 3, 4, 5, 6, 7, 8 .... */

#include <stdio.h>

#define MULTIPLYBY2(num)  (num << 1)
#define MULTIPLYBY3(num)  (num << 1) + num
#define MULTIPLYBY4(num)  (num << 2)
#define MULTIPLYBY5(num)  (num << 2) + num
#define MULTIPLYBY6(num)  (num << 2) + (num << 1)
#define MULTIPLYBY7(num)  (num << 3) - num
#define MULTIPLYBY8(num)  (num << 3)
#define MULTIPLYBY9(num)  (num << 3) + num
#define MULTIPLYBY10(num)  (num << 3) + (num << 1)

int main(void) {

	int input_num;
	int choice = 0;
	
	while (choice != 10) {

		printf("\n *********************************** \n"
			"1. Multiply by 2 \n"
			"2. Multiply by 3 \n"
			"3. Multiply by 4 \n"
			"4. Multiply by 5 \n"
			"5. Multiply by 6 \n"
			"6. Multiply by 7 \n"
			"7. Multiply by 8 \n"
			"8. Multiply by 9 \n"
			"9. Multiply by 10 \n"
			"10. Exit \n");
		
		scanf("%d", &choice);

		switch(choice) {
			case 1: 
				printf("Enter the number \n");
				scanf("%d", &input_num);
				printf("Product = %d \n", MULTIPLYBY2(input_num));
				break;
			case 2:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY3(input_num));
                                break;
			case 3:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY4(input_num));
				break;
			case 4:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY5(input_num));
				break;
			case 5:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY6(input_num));
				break;
			case 6:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY7(input_num));
				break;
			case 7:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY8(input_num));
				break;
			case 8:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY9(input_num));
				break;
			case 9:
				printf("Enter the number \n");
                                scanf("%d", &input_num);
                                printf("Product = %d \n", MULTIPLYBY10(input_num));
				break;
			case 10:
				printf("Exiting .. \n");
				break;
			default:
				printf("Please enter valid input \n");
				break;
		}
	}
	return 0;
}

