#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main(){

int i;
int n;
int min_value;
int max_value;
int wanted_num;

printf("\nEnter how many number do you want in the array\n");
scanf("%d",&n);

printf("\nEnter the max value o the numbers\n");
scanf("%d",&max_value);
printf("\nEnter the min value of the arrays\n");
scanf("%d",&min_value);

int random_num[n];

 


srand(time(NULL));

for(i=0;i<n;i= 1 + i){

    random_num[i] = rand();

    if (random_num[i] > max_value|| random_num[i] < min_value) {
			
			i = i - 1;
		}
}

printf("\nThis arrays numbers are\n");

for(i=0;i<n;i=1 +i){

    printf("\n%d\n",random_num[i]);
}


printf("\nI am a linear search programme enter a number and I can say it is in array or not\n");
scanf("%d",&wanted_num);



for(i=0;i<n;i=i+1){
    if(random_num[i]==wanted_num){
        printf("%d is in this array",wanted_num);
        return 0;
    }
}
    
    printf("%d is not in this array",wanted_num);
      return 0;

}


