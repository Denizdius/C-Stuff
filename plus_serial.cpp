#include<stdio.h>

int main() {

	int sum;
	int number;
	int ending;
	int rule;
	
	printf("I am serial number calculator so give me starting number\n");
	scanf("%d",&number);
	
	printf("Now give me a finishing number\n");
	scanf("%d",&ending );
	
	printf("Now enter rule of serial\n");
	scanf("%d",&rule);
	
	
	for (number = number ; number <= ending; number = number + rule) {
		sum = sum + number;
	}
	printf("The sum is %d", sum); 


}


