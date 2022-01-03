#include<stdio.h>

 int main () {
 
 
	int i;
	int j;
	int k;
	int l;
	int sum;
	int array_number;
	int Array[array_number]; 
	float average_grades;
	
	printf("Enter the max_array size\n");
	scanf("%d", &array_number);

    for (i = 0; i < array_number; i = i + 1) {
			printf("Enter a number for array");
			scanf("%d", &Array[i]);
		}

        printf("Your array numbers are\n");
		for (i = 0; i < array_number; i = 1 + i) {
			printf("\n:%d", Array[i]);
		}

		for (i = 0; i <= array_number; i = i + 1) {
			sum = sum + Array[i];
		}

	for (k = 1; k < array_number; k = k + 1) {

		if (Array[0] < Array[i]){

			Array[0] = Array[i];
			}
			else {
				Array[0] = Array[0];
			}
	}



	average_grades = sum / array_number;

	printf("Your arrays maximum integer is %d \n",Array[0]);
	printf("Your arrays sum is %d\n", sum);
	printf("Average of array is %f\n", average_grades);


	return(0);

 
 }

