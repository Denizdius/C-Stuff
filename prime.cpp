#include<stdio.h>

int prime(int num) {

	int i;

	for (i = 2; i < num; i = i + 1) {
		if (num % i == 0) {
			return(0);
		}
		
		}
		return(1);
	}


int main() {

	int num;
	
	printf("Enter a number I will check the number\n it s prime or not\n");
	scanf("%d", &num);

	if (prime(num) == 0) {
		printf(" this number is not a prime number");

	}
	
	if(num = 1){
		printf("This number is not a prime number");
	}

	else {
		printf(" this number is a prime number ");


	}

	return(0);
}
