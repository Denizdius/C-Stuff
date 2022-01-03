#include<stdio.h>

int main() {
	 
	int y;
	int productd;
	productd = 1;
	scanf("%d", &y);



	for (y = y; y > 0; y = y - 1) {
		productd = y * productd;
	}
	printf("%d", productd);
}
