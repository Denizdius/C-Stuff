#include<stdio.h>
double fact(double num) {
	int i;
	double product;
		i = 1;
		product = 1;
		while (i < num) {
			i = i + 1;
			product = product * i;

		}

	return (product);

}

int main() {

	double num;

	printf("I am a factorial calculator , now enter one number\n");
	scanf("%lf", &num);
	printf("Your number's factorial is %lf", fact(num));
	
	return (0);


}
