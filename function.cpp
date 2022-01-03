#include<stdio.h>

void hatabulucu(int hata) {
	printf("Error code %d", hata);
}

int main() {

	int number;
	printf("Enter a number but please enter x>=0 number");
	scanf("%d", &number);

	if (number >= 0) {
		printf("Success");

	}
	else {
		hatabulucu(404);

	}

	return (0);
}