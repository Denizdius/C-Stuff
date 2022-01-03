#include<stdio.h>
#include<stdlib.h>

float MeridianOfArray(float Array[], float N) {
	int M;
	M = 0;
	M = (N - 1) / 2;

	return(Array[M]);

}

float MeridianOfArray2(float Array2[], float L) {
	int R;
	R = 0;
	R = (R - 1) / 2;


	return(Array2[R]);

}


float AverageOfArray(float Array[], float N) {

	int i;
	float avg;
	float sum;
	sum = 0;

	for (i = 0; i < N; i = i + 1) {

		sum = sum + Array[i];
	}

	avg = sum / N;

	return avg;
}


float AverageOfArray2(float Array2[], float L) {

	int i;
	float avg;
	float sum;
	sum = 0;

	for (i = 0; i < N; i = i + 1) {

		sum = sum + Array2[i];
	}

	avg = sum / L;

	return avg;
}



int main() {

	float  minx;
	float  maxx;
	float N;
	float Stepsize;
	int i;
	int j;
	float L;


	printf("What is the minumun size of array\n");
	scanf("%f", &minx);
	printf("What is the maximum size of array\n");
	scanf("%f", &maxx);
	
	printf("What is the step size of array");
	scanf("%f", &Stepsize);

	N = maxx - minx;

	float Array[N];

	L = N / 2;
	
	 srand(time(NULL));

	float Array2[L];
	
	for (i = 0; i < N; i = i + 1) {

		Array[i] = (minx ) + (Stepsize + i);
	}


	for (j = 0; j < L; j = j + 1) {
		

		rand(Array2[j]) % (maxx + 1 - minx) + minx;

		Array2[j] * Stepsize = Array[j];

	}

	printf("\nThe Average of array one is %f\n", AverageOfArray(Array, N));
	printf("\nThe Average of Second array is %f\n", AverageOfArray2(Array2, L));
	printf("\nThe Meridian of Array one is %f\n", MeridianOfArray(Array, N));
	printf("\nThe Meridian of Array two is %f\n", MeridianOfArray(Array2, L));

	

	return 0;

}