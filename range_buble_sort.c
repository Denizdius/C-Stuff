#include<stdio.h>
#include<stdlib.h>

int main(){

int i;
int j;
int k;
int swap;
int min_value;
int max_value;
int generated_num;

printf("\nEnter how many number do you want in the array\n");
scanf("%d",&generated_num);

printf("\nEnter the max value o the numbers\n");
scanf("%d",&max_value);
printf("\nEnter the min value of the arrays\n");
scanf("%d",&min_value);


int random_num[generated_num];

srand(time(NULL));

for(i=0;i<generated_num;i= 1 + i){

    random_num[i] = rand();

    if (random_num[i] > max_value|| random_num[i] < min_value) {
			
			i = i - 1;
		}
}

 for(k=0;k<(generated_num-1); k = k + 1){

    for (j=0;j<(generated_num-k-1);j= j + 1){
        if(random_num[j]>random_num[j+1]){
            swap = random_num[j];
            random_num[j] = random_num[j+1];
            random_num[j+1] = swap;

        }
}


}
printf("\nThe bubble sorted numbers are\n");

for(i=0;i<generated_num;i = i + 1){
    printf("\n%d \n",random_num[i]);


}
return 0;
}
