#include<stdio.h>
int sum(int num1, int num2) {
	return(num1 + num2);


}

int main() {

	int num1;
	int num2;
	printf("Enter two numbers and I add them each other\n");
	scanf("%d %d", &num1, &num2);
	printf("Sum is %d", sum(num1,num2));


}
