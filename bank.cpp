#include<stdio.h>

int main() {

	int bakiye;
	int islem;
	int tutar;
	char name[20];

	bakiye = 1000;
	printf("Adinizi giriniz:\n");
	scanf("%s", name);

	printf("Merhaba Sayin %s,Denizbank'a hos geldiniz, Yapabilece�iniz i�lemler : \n1:Para Cekme\n2:Para Yat�rma\n3:Eft/Havale Yapma\n4:Bakiye Sorgulma\n5:Kart Iadde\n\n\n",name);

	printf("Isleminizi secin (1,2,3,4,5)");
	scanf("%d", &islem);

	switch (islem) {
	
	
	case 1 :
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("Cekilecek para miktar�n� girin:");
		scanf("%d", &tutar);
		if (tutar > bakiye) {
			printf("Bakiyeniz bu i�lem i�in yetersizdir");
		}
		else {
			bakiye = bakiye - tutar;
			printf("Kalan bakiyeniz %d", bakiye);
		}
		break;


	case 2:
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("Yat�r�lacak tutar� giriniz");
		scanf("%d", &tutar);

		bakiye = bakiye + tutar;
		printf("Yeni bakiyeniz %d", bakiye);
		break;

	case 3:
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("G�nderilcek para miktar�n� girin:");
		scanf("%d", &tutar);
		if (tutar > bakiye) {
			printf("Bakiyeniz bu i�lem i�in yetersizdir");
		}
		else {
			bakiye = bakiye - tutar;
			printf("Kalan bakiyeniz %d", bakiye);
		}
		break;


	case 4:
		
		printf("Bakiyeniz %d\n", bakiye);
		break;

	case 5:
		
		printf("Kart iade edildi");
		break;

		
	default:
		
		printf("Bilinmeyen i�lem");
		break;
	
	}


return(0);

}


