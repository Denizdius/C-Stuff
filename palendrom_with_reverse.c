#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max_size 1000

void char_reverser(char*word,char*word2){

int i;
int y;
y = strlen(word)-1;

for(i=0;word[i]!='\0';i = i + 1){
	
	word2[i] = word[y];
	y--;
}

}


int is_that_a_palindrom(char*word,char*word2){

    int i;
    int y;

    y=strlen(word);
    
    for(i=0;i<y;i=i+1){
        if(word[i]!=word2[i]){
            return 0;
        }
        
       

    }
    return 1;
}


int main(){

char word[Max_size];
char word2[Max_size];

printf("\nI am a palindrom checker please enter a word\n");
scanf("%s",word);

char_reverser(word,word2);

if(is_that_a_palindrom(word,word2) == 1){
    printf("%s is a palindrom word");
}

else {
    printf("\n%s is not a palindrom word\n");
}

    return 0;
}
