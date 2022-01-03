#include<stdio.h>

int main() {

	int number;
    double  product;
	int i;
	
	i= 1;
	product = 1;

	printf("Hey I am a factorial calculator , so give number then I factorial it \n");
	scanf("%d", &number);

	while ( i<=number ) {
		
		product = product * i;
		i= i + 1;

	}
	

	printf("Your Factiroal is %lf", product);

	return(0);
}
