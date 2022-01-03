#include<stdio.h>
#include<string.h>
#define Max_size 10000

int main (){

char words[Max_size];
int word_count = 0;
int i;
int j = 0;

printf("\nEnter the words then I count them\n");
gets(words);

while (words[j]) {

		if (words[j] == '\0') {
			break;
	}
		j = j + 1;

	}

for(i=0;i<j;i = i + 1){

if(words[i]== ' '){
word_count = word_count + 1;
}

}

printf("Total word is %d",word_count+1);

    return 0;
}
