#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){

    int x;
    int Max_size;
    printf("\nENTER THE MAX SIZE OF ARRAYS\n");
    scanf("%d",&Max_size);
    

char one[Max_size];
char two[Max_size];

printf("\nEnter the array one\n ");
scanf("%s",one);

printf("\nEnter the array two\n");
scanf("%s",two);



x = strcmp(one,two);

if (x <0){
    printf("Two > one");

}
else if (x>0){

    printf("One>two");

}

else {
    printf("One = Two");
}



return 0;

}
