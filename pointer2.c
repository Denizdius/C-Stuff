#include<stdio.h>
#include<stdlib.h>

int main(){

int num = 10;
int num2 = 20;
int *p_1;
int *p_2;
int *p_3;

p_1 = &num;
p_2 = &num2;

printf("%d\n",*p_1);//p_1 değerin bastır 10 çıkar

*p_1 = *p_2 + 2;//pointerlarda işlem böyle yapılır

printf("%d\n",*p_1);//p_1 değerini bastır 22 çıkar 





    return 0;
}