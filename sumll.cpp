#include<stdio.h>

int main() {

	int starn;
	int ending;
	int sum;
	int rule;
	sum = 0;
	


	printf("What's your starting number");
	scanf("%d",&starn);

	printf("What's your final number");
	scanf("%d",&ending);
	
	printf("What's your rule");
	scanf("%d",&rule);


	

		for (starn = starn; starn <= ending; starn = starn + rule) {
			sum = sum + starn;
		}
		printf("The sum is %d", sum);

	











	return (0);
}
