#include<stdio.h>

int main() {

	int number_one;
	int number_two;

	printf("Hello, my purpose is compare two numbers,\n So enter one number :");
	scanf("%d", &number_one);
	
	printf("Now enter another number please:");
   	scanf("%d", &number_two);
	

	if (number_one != number_two) {
		printf("%d is not eqaual to %d\n", number_one, number_two);
	}

	if (number_one == number_two) {
		printf("%d is equal to %d \n ", number_one, number_two);
	}
	
	if (number_one > number_two) {
		printf("%d is chunkier than %d \n ", number_one, number_two);
	}

	if (number_one < number_two) {
		printf("%d is smaller than  %d \n", number_one, number_two);
	}

	return(0);

}
