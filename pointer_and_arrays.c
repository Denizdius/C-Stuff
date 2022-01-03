#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max_size 1000

int main(){

    char word[Max_size]="deniz";
    char *p1;
    p1 = word;// direk ilk elemana eşitledi,ve tüm diziyede eşitledim artık buradan direk işlem yapabilirim
    
    printf("Fifth character of this array is %c",*(p1+4));










    return 0;
}
