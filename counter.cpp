#include<stdio.h>

int main() {

	int counter;
	int ending;



	printf("For counter choose a ending value\n");
	scanf("%d", &ending);



	for (counter =1 ; counter < ending; counter = counter= counter + 2) {
		printf("%d\n",counter);

	}




	return(0);
}
