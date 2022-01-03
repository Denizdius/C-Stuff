#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define Max_size 1000

int main(){

int x;
int y;
char username = "Deniz";
char password = "Karabacak";
char wusername[Max_size];
char wpassword[Max_size];

printf("\nEnter the username\n");
scanf("%s",wusername);
printf("\nEnter the passwoord\n");
scanf("%s",wpassword);

x = strcmp(username,wusername);
y = strcmp(password,wpassword);

if (x==0 && y == 0){

printf("Accses granted");

}

else{
    printf("\nPassword or username at least one of them is wrong try agin later\n");
}

return 0;

}
