#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct car
{
    int year;
    char model[20];
    char mark[20];
    char fuel_type[20];
    char gear_type[20];
    float engine_volume;
    char engine_type[20];
    float km;
    char colour[20];

};

typedef float meters;

struct volume{

meters lenght;
meters height;
meters widht;


};

int main(){

    struct car one = {2012,"Fiesta","Ford","Gassoline","Manuel",1.25,"Atmospheric",60.000,"White"};
	
   

     printf("%s",one.mark);



    return 0;
}
