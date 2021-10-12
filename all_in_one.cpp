#include<stdio.h>

int main() {

	int number_one;
	int number_two;
	int sum;
	int product;
	float div;
	int sub;

	printf("Hello,My purpose is calculate all situations at once \n So pick a one number:");
	scanf("%d", &number_one);

    printf("Now enter another number please:");
	scanf("%d", &number_two);

	product = number_one * number_two;
	printf(" Multiplication is is %d\n ", product);

	sub = number_one - number_two;
	printf("Substraction is %d\n ", sub);

	sum = number_one + number_two;
	printf("Additon is %d\n", sum);

	div = number_one / number_two;
	printf( "Divison is % f\n", div);






    	













}
