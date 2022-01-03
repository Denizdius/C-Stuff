#include<stdio.h>

int mainint main () {

	int grade;
	int A_count;
	int B_count;
	int C_count;
	int D_count;
	int F_count;

	printf("Hello, please enter grade states (a,b,c,d,f),\n when you done please enter EOF character ");
	printf("EOF character is Ctrl + z\n");

	while ((grade = getchar()) != EOF) {

		switch (grade)
		{
		case 'A':
			A_count = A_count + 1;
			break;

		case 'a':
		    A_count = A_count + 1;
			break;

		case 'B':
			B_count = B_count + 1;
			break;

		case 'b':
			B_count = B_count + 1;
			break;

		case 'C':
			C_count = C_count + 1;
			break;

		case 'c':
			C_count = C_count + 1;
			break;

		case 'D':
			D_count = D_count + 1;
			break;

		case 'd':
			D_count = D_count + 1;
			break;

		case 'F':
			F_count = F_count + 1;
			break;

		case 'f':
			F_count = F_count + 1;
			break;

		case '\t':
			break;

		case '\n':
			break;

		case ' ' :
			break;

		default:
			printf("This character unreconized please enter just grade characters\n");
			break;
		}

	}

	printf("Number of a grades %d\n", A_count);
	printf("Number of b grades %d\n", B_count);
	printf("Number of c grades %d\n", C_count);
	printf("Number of d grades %d\n", D_count);
	printf("Number of f grades %d\n", F_count);



	return 0;

}
