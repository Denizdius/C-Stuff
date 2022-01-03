#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_size 1000

int main(){

char one[Max_size] = "DenizKarabacak";
char two[Max_size]; 

strcpy(two,one);// one nın içindekileri two dizisine kopyala
printf("%s",two);

return 0;

}
