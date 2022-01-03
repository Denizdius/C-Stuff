#include<stdio.h>
#include<string.h>
#define Max_size 10000

int main (){

char words[Max_size];
int word_count = 0;
int i;
int j = 0;
int k;

printf("\nEnter the words then I count them\n");
gets(words);

while (words[j]) {

		if (words[j] == '\0') {
			break;
	}
		j = j + 1;

	}



for(i=0;i<j;i=i +1){

printf("%c",words[i]);

if(words[i]== ' '){
    printf("\n");
    word_count = word_count + 1;
    for(k=0;k<word_count;k=k + 1){
        printf("\t");
    }
}


}


return 0;
}
