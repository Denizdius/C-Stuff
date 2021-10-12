#include<stdio.h>

int main() {

	int number_one;
	int number_two;
	int product ;

	printf("Hello I am calculator my purpose is multiplication two numbers, now  enter one number :\n");
	scanf("%d", &number_one );

	printf("Excellent, now  enter another number:\n");
	scanf("%d", &number_two);

	product = number_one * number_two ;
	printf("Result is %d\n ", product);

	return(0);


}
