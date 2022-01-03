#include<stdio.h>

float Exponential(float base, float power) {

	float sum;
	float top;
	float bottom;
	int i;

	i = 1;
	sum = 1;
	bottom = 1;
	top = base;

	while (i <= power) {

		top = top * base;
		bottom = i * bottom;
		sum = sum + (top / bottom);
		i = i + 1;
	}

	return sum;
	
}

int main() {

	float base;
	float power;
	float value;

	printf("\nPlease enter base ");
	scanf("%f", &base);

	printf("\nThen enter the bottom");
	scanf("%f", &power);
	
	value = Exponential(base, power);

	printf("\n e to the power of %2.f is %f", base, value);



	return (0);
}
