#include<stdio.h>

int min(int num_1 , int num_2 , int num_3) {

	int min;
	min = num_1;

	if (num_2 <= min) {
		min = num_2;

	}
	 if (num_3 <= min) {
		min = num_3;
	}

	 return min;

}

int main() {
	int num_1;
	int num_2;
	int num_3;

	printf("Enter three values and I tell which is mininumum value\n");
	scanf("%d%d%d", &num_1, &num_2, &num_3);


	printf("Your minimum value is %d", min(num_1, num_2, num_3));

	return 0;

}
