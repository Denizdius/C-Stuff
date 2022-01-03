#include<stdio.h>
int main {

	int i;
	int j;
	int k;
	int l;
	int sum;
	int Array[];
	int MAXARRAYSIZE;
	float average_grades;
	
	printf("Enter the max_array size\n");
	scanf("%d", &MAXARRAYSIZE);


	for (i = 0; i < MAXARRAYSIZE; i = 1 + i) {

		printf("Enter %d. grade ", i + 1);
		scanf("%d", Array[i]);


	}
	printf("Your grades are\n :");

	for (j = 0; j < MAXARRAYSIZE; j = 1 + 1) {
		printf(" %d\n", Array[j]);
	}

	for (k = 1; k < MAXARRAYSIZE; k = k + 1) {

		if (Array[0] < Array[i]{

			Array[0] = Array[i];
			}

	}

	for (l = 0; l < MAXARRAYSIZE; l = l + 1) {

		sum = sum + Array[0];


	}

	average_grades = sum / MAXARRAYSIZE;

	printf("Your arrays maximum integer is %d \n",Array[0]);
	printf("Your arrays sum is %d\n", sum);
	printf("Average of array is %f\n", average_grades);


	return(0);

}

