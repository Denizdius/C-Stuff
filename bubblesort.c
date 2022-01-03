#include<stdlib.h>
#include<stdio.h>
#define Max_size 10



int main(){

int random_num[Max_size];
int i;
int j;
int k;
int m;
int r;
int swap;
int low_high;

srand(time(NULL));

for(i=0;i<Max_size;i = i + 1){

    random_num[i] = rand();


}

printf("\nRandom numbers are\n");
for(j=0;j<Max_size; j = j + 1){
	
	printf("\n%d\n",random_num[j]);
}

prinft("\nChoose your your bubble sort mode press 1 for low to high press 2 high to low \n");
scanf("%d",&low_high);

if(low_high==1){
    for(k=0;k<(Max_size-1); k = k + 1){

    for (m=0;m<(Max_size-k-1);m= m + 1){
        if(random_num[m]>random_num[m+1]){
            swap = random_num[m];
            random_num[m] = random_num[m+1];
            random_num[m+1] = swap;

        }
}

}
}

if(low_high==2){
    for(k=0;k<(Max_size-1); k = k + 1){

    for (m=0;m<(Max_size-k-1);m= m + 1){
        if(random_num[m]<random_num[m+1]){
            swap = random_num[m];
            random_num[m] = random_num[m+1];
            random_num[m+1] = swap;

        }
}

}
}
		
printf("\nThe bubble sorted numbers are\n");

for(r=0;r<Max_size;r = r + 1){
    printf("\n%d \n",random_num[r]);
}
return 0;
}


