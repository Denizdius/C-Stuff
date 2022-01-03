#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y){

    int z;
     z = *x;
     *x = *y;
     *y = z;

}





int main(){

int x;
int y;
printf("Enter 2 number than I swap them\n");
scanf("%d",&x);
printf("\nNow enter the second number\n");
scanf("%d",&y);

printf("Before swap process x = %d, y = %d\n",x,y);

swap(&x,&y);

printf("\nAfter swap proces x = %d,y = %d\n",x,y);

return 0;
}
