#include<stdio.h>

int main() {

	int i;
	int array_number;
	int sum;
	float arytmetic;
	int numbers[array_number];
	sum = 0;

	printf("Hello I am array maker and summer , now please enter array's lenght");
	scanf("%d", &array_number);

		for (i = 0; i < array_number; i = i + 1) {
			printf("Enter a number for array");
			scanf("%d", &numbers[i]);
		}
		
		for (i = 0; i < array_number; i = 1 + i) {
			printf("Your array numbers are\n:%d", numbers[i]);
		}

		for (i = 0; i < array_number; i = i + 1) {
			sum = sum + numbers[i];
		}

		printf("Your array's numbers sum are \n %d", sum);

		arytmetic = sum / array_number;
		printf("Your array's arytmetic is %f", arytmetic);

		return 0;


}
