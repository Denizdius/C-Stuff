#include<stdio.h>

int main() {

	int counter;
	int ending;



	printf("For counter choose a ending value\n");
	scanf("%d", &ending);



	for (counter =1 ; counter < ending; counter ++) {
		printf("%d\n",2*counter);

	}




	return(0);
}
