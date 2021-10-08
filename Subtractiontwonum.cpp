#include<stdio.h>

int main() {

	int number_one;
	int number_two;
	int sub;

	printf("Hello I am calculator my purpose is subtraciton two numbers, now  enter one number :\n");
	scanf("%d", &number_one );

	printf("Excellent, now  enter another number:\n");
	scanf("%d", &number_two);

	sub = number_one - number_two ;
	printf("Subtraction is %d\n ",sub );

	return(0);


}
