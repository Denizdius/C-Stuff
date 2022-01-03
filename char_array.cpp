#include<stdio.h>
#define Max_size 100
int main() {

	char name[] = { 'd','e','n','i','z','\0' };

	char name2[] = "deniz";

	char mname[Max_size];
	

	printf("%s\n", name);
	printf("%s\n", name2);
	scanf("%s", mname);
	printf("%s\n", mname);




	return 0;
}