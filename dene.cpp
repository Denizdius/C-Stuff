#include<stdio.h>


int main() {

	double fahr;
	double celc;
	int min;
	int max;
	int step;

	step = 20;
	max = 300;
	min = 0;
	printf("Hello , I am a fahreneit to celcius converter so enter fahreneit then I convert to celcius\n");
	scanf("%lf", &fahr);

	while (fahr <= max) {
		celc = 5 * (fahr - 32) / 9;
		printf("Celcius is %lf\t", celc);
			fahr = step + fahr;
			


	}





	return(0);




}
