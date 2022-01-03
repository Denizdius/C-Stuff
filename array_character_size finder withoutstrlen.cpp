#include<stdio.h>
#define Max_size 10000

int main() {

	char word[Max_size];
	int i = 0;
	printf("Lutfen bir cumle girin bosluk olmadan:\n");
	scanf("%s", word);
	//gets(word); bu da yapılabilir gets space den sonra da karakter almaya devam ediyor, enterla bitiriyorsunrsss

	while (word[i]) {

		if (word[i] == '\0') {
			break;
	}
		i = i + 1;

	}
	printf("Word character size is %d", i);

	return 0;

}
