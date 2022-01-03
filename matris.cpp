#include<stdio.h>

int main() {

	int matris[3][3];
	int i;
	int j;

	for (i = 0; i < 3; i = 1 + i) {

		for (j = 0; j < 3; j = 1 + j) {
			printf("Enter matris values");
			scanf("%d",&matris[i][j]);


		}
		
	}



	for (i = 0; i < 3; i = 1 + i) {

		for (j = 0; j < 3; j = 1 + j) {
			printf("%d", matris[i][j]);



		}
		printf("\n");
	}


	return 0;

}
