#include<stdio.h>

int main() {

	int number_one;
	int number_two;
	int sum;

	printf("Hello I am calculator my purpose is sum two numbers, now  enter one number :\n");
	scanf("%d", &number_one );

	printf("Excellent, now  enter another number:\n");
	scanf("%d", &number_two);

	sum = number_one + number_two ;
	printf("Sum is %d\n ",sum);

	return(0);


}
