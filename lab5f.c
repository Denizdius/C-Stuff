#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max_size 1000

int  is_that_an_anagram(char * s1 ,char * s2){

   
   int i;
   int j;
   
   int n  = strlen(s1);
   
   int n2 = strlen(s2);
   
   char raw;

   
   if( n != n2) {    
      printf(" \n");
      return (0);
   }
   
   
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s1[i] > s1[j]) {
            raw  = s1[i];
            s1[i] = s1[j];
            s1[j] = raw;
         }
         if (s2[i] > s2[j]) {
            raw  = s2[i];
            
            s2[i] = s2[j];
            
            s2[j] = raw;
         }
      }
   }


   for(i = 0; i<n; i++) {

      if(s1[i] != s2[i]) { 
             
         printf("\n");
         return 0;
      }
   }

   printf(" \n");
   return 1;
}



int main () {

   char s1[Max_size];
   
   char s2[Max_size];
   
   printf("\nEnter the first array\n");
   scanf("%s",s1);

   printf("\nEnter the second array\n ");
   scanf("%s",s2);

  if(is_that_an_anagram(s1,s2) == 1){
  	printf("It 's  a anagram words  ");
  }
	  
  	else {
  		printf("It's not a anagram words");
	  }  
	  return 0;
}
