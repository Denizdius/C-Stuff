#include<stdio.h>
#define Max_size 10000;

int main() {

	char user_name[Max_size];
	char password[Max_size];
	
	int fault_counter = 0;

	printf("Welcome to this website please  enter your usernme first:\n");
	scanf("%s", user_name);
	printf("\nNow enter your password:\n");
	scanf("%s", password);

	if (user_name = 'deniz' || password = '1234') {
		printf("Giriþ baþarýlýdýr\n");
	}

	else {
		fault_counter = fault_counter + 1;

		printf("Enter the user name again\n");
		scanf("%s", user_name);
		printf("\nNow enter your password again :\n");
		scanf("%s", password);
		
	}
	
	if (fault_counter > 3) {
		printf("To many fault you can't enter the website now ");
	}







}