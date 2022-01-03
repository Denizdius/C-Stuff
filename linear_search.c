#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_size 100



int main(){

int i;

int wanted_num;
int numbers[] = {5,8,20,25,68,99,100,173,202,};
 size_t n = sizeof(numbers)/sizeof(numbers[0]);// array numara için ez yoldan buldurucu
 
printf("\nI am a linear search programme enter a number and I can say it is in array or not\n");
scanf("%d",&wanted_num);

for(i=0;i<n;i=i+1){
    if(numbers[i]==wanted_num){
        printf("%d is in this array",wanted_num);
        return 0;
    }
}
    
    
    printf("%d is not in this array",wanted_num);
      return 0;

}




