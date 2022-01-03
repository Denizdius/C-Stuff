#include<stdio.h>

int main() {

	int total;
	float avg;
	int count;
	int avg_number;
	int grade;


    printf("Hi, I am a avarage calculator.\nFirst enter How many number you want to calculate their averages\n");
	scanf("%d", &avg_number);

	total = 0;
	count = 1;

	

		while (count <= avg_number) {
			printf("Now please enter grades\n\t");
			scanf("%d", &grade);

			total = total + grade;
			count = count + 1;

		}
		
		avg = total / avg_number;
		
		
	

	
	if ( avg >= 90 ) {
		printf("Class Average is A \n");
	}

	else if (avg >= 80) {
		printf("Class Average is B \n");
	}

	else if (avg >= 70) {
		printf ("Class Average is C \n");
	}

	else if (avg >= 60) {
		printf("Class Average  is D \n");
	}
	
	else if (avg < 60) {
		printf("Class Average is F\n");
	}
		
		printf("Class Average is %.2f\n",avg);


	return(0);

}
	




	









