#include<stdio.h>

float komb(float x, float y) {

	float productd;
	float productu;
	productu = 1;
	productd = 1;
	float kombination;
	int i;
	int j;
	
	
	
	for(j = 1 ; j<=y; j = j + 1) {
		productd = j * productd;
	}

	for (i = 0; y > i; i = i + 1){
	
		productu = productu * ( x-i);
	
	}

	kombination = (productu / productd);

	return(kombination);

}

int main() {
	float x;
	float y;

	printf("I am the combination progmme (x,y) enter x value\n");
	scanf("%f", &x);

	printf("enter the down value y \n");
	scanf("%f", &y);

	printf("The combination is %f", komb(x, y));


	return 0; 
}
