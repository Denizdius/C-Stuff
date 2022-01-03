#include<stdio.h>


int main() {

	float number;
	float sum;
	float ending;
	float rule;
	int calculate;
	int product;
	int i;
	
	product = 1;
	
	printf("I am serial number calculator so give me starting number\n");
	scanf("%f",&number);
	
	printf("Now give me a finishing number\n");
	scanf("%f",&ending);
	
	printf("Now enter rule of serial\n");
	scanf("%f",&rule);
	
	for(i=0; i<ending;i =1 + i){
		sum = sum + number * rule;
		printf("%d",sum);
		
		
		
	}
	
	




	
	
	
	return(0);

}


