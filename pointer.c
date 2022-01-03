#include<stdio.h>
#include<stdlib.h>

int main(){

int x = 10;
int *d;

d = &x;


printf("%d\n",*d);//pointer değerini bastırır 10 çıkar
printf("%d\n",d);//direk adress değerini basar
printf("%d\n",&x);//aynı şekilde adress değerini basa

*d = 30;

printf("%d\n",x);//yeni değer 30 u basar 
printf("%d\n",&x);//adress değişmez direk aynı  adressi basar 
printf("%d\n",*d);//pointerın değerini basar o da 30


return (0);
}
