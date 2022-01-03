#include <stdio.h>
#include <math.h>

 int main() {
	
	int sentinel = -63;

	int i;
	int j;
	int k;
	int a;


	int a_counter = 0;
	int b_counter = 0;
	int c_counter = 0;
	int d_counter = 0;
	int f_counter = 0;

	float grades[100];
	
	
	printf("I am a progremme that count grades so pls enter the grades\n");

	

	

		for (i = 1; j = 100; i <= j, i = 1 + i) {
			printf("%d. Student's Score :", i);
			scanf("%f", &grades[i]);

			if (grades[i] == -63) {
				break;
				
			}
			
			if (grades[i] > 100 || grades[i] < 0) {
			printf("\n Unreconized value please enter again\n");
			i = i - 1;
		}
			

		}


		printf("\nNumber of Students: %d", i - 1);

		for (k = 1; k < i; k = k + 1) {

			a = grades[k];

			if (a >= 80 && a <= 100) {
				a_counter = a_counter + 1;
			}

			if (a < 80 && a >= 60) {
				b_counter = b_counter + 1;
			}
			if (a < 40 && a >= 20) {
				d_counter = d_counter + 1;
			}
			else if (a < 20 && a >= 0) {
				f_counter = f_counter + 1;
			}
		}

		printf("\nGrade A:\t%d", a_counter);
		printf("\nGrade B:\t%d", b_counter);
		printf("\nGrade C:\t%d", c_counter);
		printf("\nGrade D:\t%d", d_counter);
		printf("\nGrade F:\t%d", f_counter);

		int s;
		float mean;
		float deviation;
		float standart[100];
		float devision_sum = 0;
		float sum = 0;


		for (s = 0; s < i; s = s + 1) {
			sum = sum + grades[s];
		}

		mean = sum / (i - 1);

		for (s = 1; s < i; s = s + 1) {

			standart[s] = (grades[s] - mean) * (grades[s] - mean);
		}

		printf("\n\nMean of the exam %f", mean);

		for (s = 1; s < i; s = s + 1) {
			devision_sum = devision_sum + standart[s];
		}

		
		deviation = sqrt(devision_sum / (i - 2));
		printf("\nStandard deviation of the exam %f", deviation);

		return 0;

	}



	  




