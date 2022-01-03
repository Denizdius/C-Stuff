#include<stdio.h>
#include<math.h>


int main() {


	float a;
	float c;
	float b;
	float diskmnt;
	float root_one;
	float root_two;
	float root_w1;
	float root_w2;
	float integral;
	

	printf("\nHello I am a quadradict function maker , diskriminant founder and diskrimant commentes, root founder, you now quadratic functions be like this\n ax2 +bx + c so first enter a value:");
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

	integral  = root_one *root_one *root_one / 3  - (b * root_one * root_one / 2 + c * root_one - root_two * root_two * root_two / 3 - b * root_two * root_two / 2  + c * root_two;
	
	if (integral < 0) {
		integral = -1 * integral;
		printf("This curve area is %f", integral);
	}
	else {
		printf("This curve area is %f", integral);
	}



	return 0;

}
