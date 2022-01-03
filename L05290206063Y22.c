#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max_size 1000

int  is_that_an_anagram(char * word ,char * word2){

   
   int i;
   int j;
   
   int n  = strlen(word);
   
   int n2 = strlen(word2);
   
   char raw;

   
   if( n != n2) {    
      printf(" \n");
      return (0);
   }
   
   
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (word[i] > word[j]) {
            raw  = word[i];
            word[i] = word[j];
            word[j] = raw;
         }
         if (word2[i] > word2[j]) {
            raw  = word2[i];
            
            word2[i] = word2[j];
            
            word2[j] = raw;
         }
      }
   }


   for(i = 0; i<n; i++) {

      if(word[i] != word2[i]) { 
             
         printf("\n");
         return 0;
      }
   }

   printf(" \n");
   return 1;
}



int main () {

   char word[Max_size];
   
   char word2[Max_size];
   
   printf("\nEnter the first array\n");
   scanf("%s",word);

   printf("\nEnter the second array\n ");
   scanf("%s",word2);

  if(is_that_an_anagram(word,word2) == 1){
  	printf("It 's  a anagram words  ");
  }
	  
  	else {
  		printf("It's not a anagram words");
	  }  
	  return 0;
}
    