#include<stdio.h>

int main() {

	int bakiye;
	int islem;
	int tutar;
	char name[20];

	bakiye = 1000;
	printf("Adinizi giriniz:\n");
	scanf("%s", name);

	printf("Merhaba Sayin %s,Denizbank'a hos geldiniz, Yapabileceğiniz işlemler : \n1:Para Cekme\n2:Para Yatırma\n3:Eft/Havale Yapma\n4:Bakiye Sorgulma\n5:Kart Iadde\n\n\n",name);

	printf("Isleminizi secin (1,2,3,4,5)");
	scanf("%d", &islem);

	switch (islem) {
	
	
	case 1 :
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("Cekilecek para miktarını girin:");
		scanf("%d", &tutar);
		if (tutar > bakiye) {
			printf("Bakiyeniz bu işlem için yetersizdir");
		}
		else {
			bakiye = bakiye - tutar;
			printf("Kalan bakiyeniz %d", bakiye);
		}
		break;


	case 2:
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("Yatırılacak tutarı giriniz");
		scanf("%d", &tutar);

		bakiye = bakiye + tutar;
		printf("Yeni bakiyeniz %d", bakiye);
		break;

	case 3:
		
		printf("Bakiyeniz %d\n", bakiye);
		printf("Gönderilcek para miktarını girin:");
		scanf("%d", &tutar);
		if (tutar > bakiye) {
			printf("Bakiyeniz bu işlem için yetersizdir");
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
		
		printf("Bilinmeyen işlem");
		break;
	
	}


return(0);

}


