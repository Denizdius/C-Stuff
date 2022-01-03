#include<stdio.h>

int main() {

	int bakiye;
	int islem;
	int tutar;
	char name[20];

	bakiye = 1000;
	printf("Adinizi giriniz:\n");
	scanf("%s", name);

	printf("Merhaba Sayin %s,Denizbank'a hos geldiniz, Yapabileceginiz islemler : \n1:Para Cekme\n2:Para Yatirma\n3:Eft/Havale Yapma\n4:Bakiye Sorgulma\n5:Kart Iadde\n\n\n",name);

	printf("Isleminizi secin (1,2,3,4,5)\n");
	scanf("%d", &islem);

	switch(islem) {
	
	
	case 1 :
		
		printf("\nBakiyeniz %d tl\n", bakiye);
		printf("Cekilecek para miktarını girin:");
		scanf("%d", &tutar);
		
		if (tutar > bakiye) {
			printf("Bakiyeniz bu islem icin yetersizdir");
		}
		else {
			bakiye = bakiye - tutar;
			printf("Isleminiz basariyla gerceklesti\n");
			printf("Kalan bakiyeniz %d tl", bakiye);
		}
	
		
		break;


	case 2:
		
		printf("Bakiyeniz %d tl\n", bakiye);
		printf("Yatirilacak tutari giriniz");
		scanf("%d", &tutar);

		bakiye = bakiye + tutar;
		printf("Yeni bakiyeniz %d tl", bakiye);
		
		break;

	case 3:
		
		printf("Bakiyeniz %d tl\n", bakiye);
		printf("Gonderilcek para miktarini girin:");
		scanf("%d", &tutar);
		if (tutar > bakiye) {
			printf("Bakiyeniz bu islem icin yetersizdir\a");
		}
		else {
			bakiye = bakiye - tutar;
			printf("Isleminiz basariyla gerceklesti\n");
			printf("Kalan bakiyeniz %d tl", bakiye);
		}
		
		break;


	case 4:
		
		printf("Bakiyeniz %d tl \n", bakiye);
		
		break;

	case 5:
		
		printf("Kart iade edildi");
		
		break;

		
	default:
		
		printf("Bilinmeyen islem");
		break;
		
	
	}


return(0);

}


