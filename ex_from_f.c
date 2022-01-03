#include<stdio.h>

int main (){

    int number;
    int divided;
    int exist;
    int number2;


    printf("\nI am a number to string converter about 0 to 99 so enter a number than I will convert to a string\n");
    printf("\n");
    scanf("%d",&number);
    printf("\n");

    divided = number / 10;
    exist = number - (divided *10);  
    number2 =  exist + (divided * 10);


   if(number>0 && number<=99){

   if(divided == 0){
        printf("");
    }
    else if(divided == 1) {
        printf("on");
    }
     else if(divided == 2) {
        printf("yirmi");
    }
     else if(divided == 3) {
        printf("otuz");
    }
     else if(divided == 4) {
        printf("kirk");
    }
     else if(divided == 5) {
        printf("elli");
    }
     else if(divided == 6) {
        printf("altmis");
    }
     else if(divided == 7) {
        printf("yetmis");
    }
     else if(divided == 8) {
        printf("seksen");
    }
     else if(divided == 9) {
        printf("doksan");
    }
    
    printf(" ");
    
    }

    if(number2>=0 && number2<=99){

         if(exist == 0){
        printf("");
    }

    else if(exist == 1){
        printf("bir");
    }
     else if(exist == 2){
        printf("iki");
    }
     else if(exist == 3){
        printf("uc");
    }
     else if(exist == 4){
        printf("dort");
    }
     else if(exist == 5){
        printf("bes");
    }
     else if(exist == 6){
        printf("alti");
    }
     else if(exist == 7){
        printf("yedi");
    }
     else if(exist == 8){
        printf("sekiz");
    }
     else if(exist == 9){
        printf("dokuz");
    }

    }

    if (number == 0){
        printf("sifir");
    }


 return 0;
}
