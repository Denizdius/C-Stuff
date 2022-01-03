#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define Max_size 1000

int main(){

int x;
char word[Max_size];
char word2[Max_size];

printf("\nEnter the first array\n");
gets(word);

printf("\nEnter the second array\n");
gets(word2);

printf("\nHown many words do you want from second array\n");
scanf("%d",&x);

printf("\nbefore mergening two arrays the array is %s\n",word);

strncat(word,word2,x);// x değişkeniyle ikinci arrayden ne kadar karakter alacağımızı belirledik

printf("\nAfter mergening the new array is %s\n",word);

return 0;
}