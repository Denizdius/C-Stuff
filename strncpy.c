#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_size 1000

int main(){

char one[Max_size] = "DenizKarabacak";
char two[Max_size] = ""; // n li karakterler direk bir şey yazmayınca hata veriyor

strncpy(two,one,5);// one nın içindekileri two dizisine kopyala ve 5 eleman koplya
printf("%s",two);

return 0;

}