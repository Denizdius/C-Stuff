#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max_size 1000

int main(){

int num[Max_size];
int  *p;
int i;

for(p=num;p<num+100;p= p +1){//burada pointer bi sayı gibi olduğu için num a eşitledik 
    *p=0;//burada atama yaptık her elemanı 0 a eşitledik
}

for(p=num;p<num+100;p= p +1){
    printf("%d\n",*p);//burada eleman bastırdık
}


return 0;
}
