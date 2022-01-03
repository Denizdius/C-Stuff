#include<stdio.h>

int prime(int num) {

	int i;
	int divison_counter;

	for (i = 2; i < num; i = i + 1) {
		if (num % i == 0) {
			printf("%d\n is divisible by %d\n",num ,i);
			divison_counter = divison_counter + 1;
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
	
	else if(prime(num)== 1 ) {
		
		printf("This number is a prime number");
	}




	
	
	return(0);


	}

	

