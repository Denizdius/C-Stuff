#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printTriangle(float a, float b){

float stepness;
    stepness = (a / b) ;
    int i;
    int j;

    printf("The stepness is %f",stepness);
    

   for(i=0;i<=a;i++)
   {
	for(j=1;j*stepness<=i;j++)
	   printf("*");
	printf("\n");
   }


}


int main(){

float a;
float b;
printf("\nPlease enter a \n");
scanf("%f",&a);

printf("\nPlease enter b\n");
scanf("%f",&b);

printTriangle(a,b);



    return 0;
}



