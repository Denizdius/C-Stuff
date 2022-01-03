#include <stdio.h>
#include <string.h>
#include <stdio.h>
#define Max_size 1000

int main () {



   char s1[Max_size] ;
   char s2[Max_size];

   printf("\nEnter the first array\n");
   scanf("%s",s1);

   printf("\nEnter the second array\n ");
   scanf("%s",s2);

   char raw;

   int i, j;

   int n  = strlen(s1);
   
   int n2 = strlen(s2);

   
   if( n != n2) {    
      printf("%s and %s are not anagrams \n", s1, s2);
      return 0;
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
         printf("This strings are not anagrams \n", s1, s2);
         return 0;
      }
   }

   printf("Congrats this strings are anagram  \n");
   return 0;
}
