#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 1000

int main(){

int number_1;
int number_2;
int operator;
int x = 0;
int y;
int z;

int binary[max],i,j,k,n,t,r;
int binary2[max];
int binary3[max];


printf("\nEnter one number\n");
scanf("%d",&number_1);
printf("\nEnter second number\n");
scanf("%d",&number_2);

printf("\nNow enter your bitwise operation for this two numbers\n");
printf("For ^ press 1 , for | press 2 , for & press 3 ");
scanf("%d",&operator);


switch (operator) {
	
	
	case 1 :

		x = number_1 ^ number_2;

     printf("\n After this operator new number is %d\n",x);

	 if(x!=0){
	
		for(i=0;x>0;i++){
			binary[i]=(x%2);
			x /= 2;
		}
		
		printf("\nAfter the operation the new binary number is \n");
		for(j=i-1;j>=0;j--){
			
			printf("%d",binary[j]);
			
		}
}
	else {
        printf("0");
    } 
		break;


	case 2:
    y = number_1 | number_2;

     printf("\n After this operator new number is %d\n",y);

	 if(y!=0){
	
		for(t=0;y>0;t++){
			binary[t]=(y%2);
			y /= 2;
		}
		printf("\nAfter the operation the new binary number is \n");
		for(k=t-1;k>=0;k--){
			
			printf("\n %d\n",binary2[k]);
			
		}
}
	else {
        printf("0");
    } 
		
		
		break;

	case 3:
		z = number_1 & number_2;

     printf("\n After this operator new number is %d\n",z);

	 if(z!=0){
	
		for(r=0;x>0;r++){
			binary[r]=(z%2);
			z /= 2;
		}
		
		printf("\nAfter the operation the new binary number is \n");
		for(n=r-1;n>=0;n--){
			
			printf("%d",binary3[n]);
			
		}
}
	else {
        printf("0");
    } 
		break;


		
	default:
		
		printf("Unknown operator");
		break;
	
	}






    return 0;
}
