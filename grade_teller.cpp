#include<stdio.h>

int main() {
	
	int grade;

	printf("Im a c programm which tells pass or failure on your exam so tell me what is your grade :\n");
	scanf("%d", &grade);

	if ( grade >= 60 ) {
		
		printf("Passed\n");
	}

	else {
		printf("Failed\a");
	}
	
	if ( grade >= 90 ) {
		printf("Your Grade is A \n");
	}

	else if (grade >= 80) {
		printf("Your Grade is B \n");
	}

	else if (grade >= 70) {
		printf ("Your Grade is C \n");
	}

	else if (grade >= 60) {
		printf("Your Grade is D \n");
	}



	return(0);
}

