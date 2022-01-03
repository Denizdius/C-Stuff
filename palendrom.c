#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_size 1000

int is_that_a_palendrom(char * word ){

    int i = 0;
    int y;
    int j;
   
    y = strlen(word);
    j=y;
    
    while(i<y){

        for(j=j;j>0;j=j-1){
          
           if(word[i]!=word[j-1]){
               return 0;   
           }
           i = i + 1;
           
        }
           
       }
       
        return 1; 
       
       
    }

int main(){
	
char word[Max_size];

printf("\nI am a programme that test  word palendrom or not\n");
printf("\nSo enter the word\n");
scanf("%s",word);


if(is_that_a_palendrom(word) == 1){
    printf("%s is a palendrom word",word);
}
else{
    printf("%s is not a palendrom word",word);
}
return 0;
}
