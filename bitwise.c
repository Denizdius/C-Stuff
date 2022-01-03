#include <stdlib.h>
#include <stdio.h>
void bprint(int val)
{
    char str[sizeof(int) * 8 + 1];
    itoa(val, str, 2);
    printf("%0*s\n", sizeof(int) * 8, str);
}

int main(){

    int x;
    printf("enter a number : \n");
    scanf("%d", &x);
    bprint(x);






}