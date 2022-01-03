#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

void fixtitle (char word[N]){

    int i;


 for(i=1;i<N;i = i + 1){

     if( word[i] >= 65 && word[i]<97){
          word[i] = word[i] + 32;
     }
    
 }
 
 

     if( word[0] >=97 &&  word[0]<=122){
     	 word[0] = word[0] - 32;
	 }
	 
          
     
    
 }
 
 


 int main()
 {
   char word[N];

   printf("Enter a word : ");
   scanf("%[^\n]",word);

   fixtitle(word);
   printf("The title is %s",word);


  
   

   return 0;
 }
