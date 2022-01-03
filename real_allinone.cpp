#include<stdio.h>
#include<math.h>


int main() {

	int sum;
	int product;
	double div;
	int sub;
	int mp;
	double number_one;
	double number_two;
	int equation;
	int i;


	float a;
	float c;
	float b;
	float diskmnt;
	float root_one;
	float root_two;
	float root_w1;
	float root_w2;


	printf("\nWhat you want to do press 1 for sum\n press 2 for sub\n press 3 for div\n press 4 multiple\n press 5 for second degree equation  press 6 for factorial\n");
	scanf("%d", &equation);

	switch (equation)
	{
	case 1:
		printf("You are choosed 1 , for sum you have to choose 2 numbers so enter first number\n");
		scanf("%lf", &number_one);
		printf("Now enter the second number\n");
		scanf("%lf", &number_two);

		sum = number_one + number_two;
		printf("Sum is %d", sum);
		break;

	case 2:
		printf("You are choosed 2 , for sub you have to choose 2 numbers so enter first number\n");
		scanf("%lf", &number_one);
		printf("Now enter the second number\n");
		scanf("%lf", &number_two);

		sub = number_one - number_two;
		printf("Sub is %d", sub);
		break;

	case 3:
		printf("You are choosed 3 , for division you have to choose 2 numbers so enter first number\n");
		scanf("%lf", &number_one);
		printf("Now enter the second number\n");
		scanf("%lf", &number_two);

		div = number_one / number_two;
		printf("Division is %lf", div);
		break;

	case 4:
		printf("You are choosed 4 , for multiple you have to choose 2 numbers so enter first number\n");
		scanf("%lf", &number_one);
		printf("Now enter the second number\n");
		scanf("%lf", &number_two);

		mp = number_one * number_two;
		printf("Multiple is %d", mp);
		break;

	case 5:
		printf("\nHello I am a quadradict function maker , diskriminant founder and diskrimant comments, root founder, you now quadratic functions be like this\n ax2 +bx + c so first enter a value:");
		scanf("%f", &a);

		printf("\nSecond ,enter b value\n");
		scanf("%f", &b);

		printf("\nFinally enter a c value\n ");
		scanf("%f", &c);

		diskmnt = b * b - 4 * c * a;

		root_one = (-b + sqrt(diskmnt)) / 2 * a;
		root_two = (-b - sqrt(diskmnt)) / 2 * a;

		root_w1 = -root_one;
		root_w2 = -root_two;

		if (diskmnt > 0) {
			printf("\nThis equasion is (x+%2.f) . (x+%2.f)", root_w1, root_w2);
			printf("\nThis equasion has two real roots on real numbers\n\t");
			printf("\nThis roots are %2.f and %2.f", root_one, root_two);


		}

		else if (diskmnt == 0) {
			printf("\nThis equasion is (x+%2.f) . (x+%2.f)", root_w1, root_w2);
			printf("\nThis equasion has one root on real numbers\n");
			printf("\nThis root is %2.f", root_one);
		}

		else if (diskmnt < 0) {
			printf("\nThis equasion  has 0 root on real numbers\n");
		}

		break;

	case 6:

		i = 1;
		product = 1;

		printf("Hey I am a factorial calculator , so give number then I factorial it \n");
		scanf("%d", &number_one);

		while (i <= number_one) {

			product = product * i;
			i = i + 1;

		}

		printf("Your Factiroal is %lf", product);


		break;

	default:
		printf("Undefined number please try again");
		break;
	

	}


	return(0);
}







			
			











	









	

