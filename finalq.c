#include<stdio.h>

int FindIndexOfMaximumElementOfArray(int Array[], int NumberOfElementsOfArray) {
	int i;
	int max;
	max = Array[0];

		for (i = 0; i < NumberOfElementsOfArray; i = i + 1) {

		if (Array[i] > max) {
			max = Array[i];
		}

	}


	return max;



}


int FindIndexOfMinimumElementOfArray(int Array[], int NumberOfElementsOfArray) {
	int i;
	int min;
	min = Array[0];

	for (i = 0; i < NumberOfElementsOfArray; i = i + 1) {

		if (Array[i] < min) {
			min = Array[i];
		}

	}


	return min;



}

float AverageOfArray(int Array[], int NumberOfElementsOfArray) {

	int i;
	float avg;
	float sum;
	sum = 0;

	for (i = 0; i < NumberOfElementsOfArray; i = i + 1 ) {

		sum = sum + Array[i];
	}

	avg = sum / NumberOfElementsOfArray;

	return avg;
}


int main() {


	
	int NumberOfElementsOfArray;
	int i;

	printf("Enter the NumberOfElementsOfArray\n");
	scanf("%d", &NumberOfElementsOfArray);
		int Array[NumberOfElementsOfArray];

	for (i = 0; i < NumberOfElementsOfArray; i = i + 1) {

		printf("\nEnter the value:\n");
		scanf("%d", &Array[i]);
	}
	printf("The max value of array is %d\n", FindIndexOfMaximumElementOfArray(Array,NumberOfElementsOfArray));
	printf("The min value of array is %d\n",FindIndexOfMinimumElementOfArray( Array, NumberOfElementsOfArray));
	printf("The avg of array %f \n", AverageOfArray( Array, NumberOfElementsOfArray));
	return 0;
}
