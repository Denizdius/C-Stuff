#include<stdio.h>
#define Max_size 10000

int main() {

	char user_name[Max_size];
	char password[Max_size];
	

	int i;
	i = 0;
	
	while(i<=3){
		
	printf("please enter your usernme first:\n");
	scanf("%s", user_name);
	printf("\nNow enter your password:\n");
	scanf("%s", password);
	

	if (user_name[0] == 'd' && user_name[1] == 'e' && user_name[2] == 'n'&& user_name[3]=='\0' && password[0] == '1' && password[1] == '\0') {
		printf("\nAcces granted\n");
		break;
	}
	
	
	else {
		printf("\nThis combination is wrong you have to enter again when you enter wrong 3 times programe will shut down\n");
		i = i + 1;
	}


		
		
	}

	





return 0;

}
