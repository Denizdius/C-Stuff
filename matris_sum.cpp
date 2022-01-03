#include<stdio.h>

int main() {

	int matris[3][5];
	int i;
	int j;
	int sum;
	sum = 0;

	

	for (i = 0; i < 3; i = 1 + i) {

		for (j = 0; j < 5; j = 1 + j) {
			scanf("%d ", &matris[i][j]);

		}
	}

	//for (i = 0; i < 3; i = 1 + i) {

	//	for (j = 0; j < 5; j = 1 + j) {
	//		printf("%d ", matris[i][j]);

	//	}
	//	printf("\n");
//	} 

	for (j = 0; j < 5; j = 1 + j) {

		for (i = 0; i < 3; i = i + i) {
			sum = sum + matris[i][j];

		}
		printf("The sum o matris is %d", sum);
		sum = 0;
	 }
		
	return 0;
}
