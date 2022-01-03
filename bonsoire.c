#include<stdio.h>
#include<string.h>
#define Max_size 1000

int main(){

    char word[Max_size] = "bonne";
    char word2[Max_size] = "soiree";
    char word3[Max_size] = "";

    strncpy(word3,word,3);// word içindeki 3 kelimeyi word3 e koplayala
    strncat(word3,word2,5);
    printf("\nNew array is %s\n",word3);



    return 0;
}
