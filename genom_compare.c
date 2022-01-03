#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_size 10

float compare_genoms(char g1[max_size],char g2[max_size]){


float common_g_counter = 0.0;
int i;
float ratio = 0.0;

for(i=0;i<max_size;i = i + 1){

if(g1[i] == g2[i]){
    common_g_counter = common_g_counter + 1;
}
else {
    continue;

}

}

ratio = (common_g_counter / max_size)  * 100 ;

return(ratio);

}


int main(){

int i;
char g1[max_size];
char g2[max_size];


for(i=0;i<max_size;i = i + 1){

    printf("\nEnter %d. gen\n",i + 1);
    scanf("%s",&g1[i]);
    
   
    if(g2[i] != "A" || g2[i] != "T" || g2[i] != "G" || g2[i] != "C") {

        printf("\nThis is not valid gen code pls enter again\n");
        i  = i -1;

       

    }
    
}


printf("\nNow enter the secong genom \n");
for(i=0;i<max_size;i = i + 1){

    printf("\nEnter %d. gen\n",i + 1);
    scanf("%s",&g2[i]);
    

}


printf("\nThe similarity of this two gens is %f\n",compare_genoms(g1,g2));



    return 0;
}
