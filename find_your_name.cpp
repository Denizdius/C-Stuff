#include<stdio.h>

int main() {
	char name[] = "Deniz";

	int harf;

	printf("Deniz adinin kacinnci harfini gormek istiyorsun");
	scanf("%d", &harf);

	printf("Deniz harfinin %d'ninci harfi %c'dir", harf, name[harf - 1]);




	return(0);


}

