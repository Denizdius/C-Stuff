#include<stdio.h>

int main() {

	int number;
	int power;
	int i;
	int product;
	int sum;

	sum = 0;
	product = 1;

	

	printf("Hello I am a power numbers calculator enter your number\n");
	scanf("%d", &number);

	printf("Now enter your power\n");
	scanf("%d", &power);

	if (power == 0) {

		printf("Power of this number is 1");
	}

	else {
		for (i = 0; i < power; i = 1 + i) {
			product = product * number;
			sum = sum + product;
		}
			printf(" your number's power equal to %d\n",product);
			printf("Sum of all %d", sum);

	}








	return (0);
}
