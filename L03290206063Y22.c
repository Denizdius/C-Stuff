#include<stdio.h>

int main() {

	int i;
	int array_number;
	int numbers[array_number];
	int a_count;
	int b_count;
	int c_count;
	int d_count;
	int f_count;


	printf("Hello I am array maker and summer , now please enter array's lenght");
	scanf("%d", &array_number);
	


	for (i = 0; i < array_number; i = i + 1) {
		printf("Enter a number for array");
		scanf("%d", &numbers[i]);


	}

	for (i = 0; i < array_number; i = 1 + i) {
		printf("Your array numbers are\n:%d", numbers[i]);
	}

	if (numbers[array_number] >= 80) {
		a_count = a_count + 1;
	}

	else if (numbers[array_number] >= 60) {
		b_count = b_count + 1;
	}

	else if (numbers[array_number] >= 40) {
		c_count = c_count + 1;
	}

	else if (numbers[array_number] < 40) {
		d_count = d_count + 1;
	}

	else  (numbers[array_number] >= 0) {
		f_count = f_count + 1;
	}

	printf("Numbers of students %d", array_number);
	printf("Number of a grades %d\n", A_count);
	printf("Number of b grades %d\n", B_count);
	printf("Number of c grades %d\n", C_count);
	printf("Number of d grades %d\n", D_count);
	printf("Number of f grades %d\n", F_count);



	


	return  0;
}







