#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
    int i;
    long a;
    int n =1000;
    int m;
    int swap;
    int wanted_number;
    int start = 0;
   


int numbers[n];
int final = (n -1);
int mid = (start + final) / 2;



for(i=0;i<n;i= i + 1){

    numbers[i] = rand();

    if (numbers[i] > 10000 || numbers[i] < 1) {
			
			i = i - 1;
		}


}

for(i=0;i<(n-1); i = i + 1){

    for (m=0;m<(n-i-1);m= m + 1){

        if(numbers[m]>numbers[m+1]){
            swap = numbers[m];
            numbers[m] = numbers[m+1];
            numbers[m+1] = swap;
        }
}
}
printf("\nNew bubble sorted array is\n");

for(i=0;i<n;i= 1 + i){
    printf("\n%d\n",numbers[i]);
    
}

printf("\nEnter the number and I will look is there or not \n");
scanf("%d",&wanted_number);

time_t time1,time2;
 time1 = time(NULL);

 while(start<=final){

if(numbers[mid]<wanted_number){
     start = mid + 1;
}

else if(numbers[mid] == wanted_number){
	
			 time2 = time(NULL);

    printf("\n%d is in this array it takes %f ms to find it \n",wanted_number,difftime(time2,time1));
    return 0;
    
}

else{
    final = mid - 1;
}
    mid = (start+final) / 2;

 }
	
	



 
printf("\nI cant find that number\n");

    return 0;
}
