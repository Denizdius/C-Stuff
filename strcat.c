#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define Max_size 1000

int main(){

char word[Max_size];
char word2[Max_size];


strcpy(word,"Deniz");//deniz kelimesini direk kopyaladık
strcat(word," Karabacak");//karabacak kelimesini ekledik
strcpy(word2," ve Kartal Karabacak");
strcat(word,word2);
printf("%s",word);


return 0;
}