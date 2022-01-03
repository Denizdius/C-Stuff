#include<stdio.h>
#define max_size 100

int ortak_harf(char word[max_size], char word2[max_size]){

	int i;
	int j;
	int t = 0;

	for (i = 0; i < max_size; i = 1 + i) {

		for (j = 0; j < max_size; j = j + 1) {
			if (word[i] == word2[i]) {
				t = t + 1;
			}
		}
	}

	return  t;


}

int main() {

	
	int i;
	
	char  exit = 'e';

	char word[max_size];
	char word2[max_size];

	printf("Enter the characters when you done if you want to exit then press #");

	for (i = 0; i < max_size; i = i + 1) {
		scanf("%s", word[i]);

		if (word[i] == '#') {
			break;
		}
		
	}



	for (i = 0; i < max_size; i = i + 1 ) {
		scanf("%s", word2[i]);

		if (word[i] == '#') {
			break;
		}

	}

	printf("Ortak harf sayýsý %d", ortak_harf(word, word2));
	

}
