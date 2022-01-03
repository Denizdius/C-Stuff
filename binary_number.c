#include <stdio.h>
#define max 99


main(){
	
	int binary[max],number,i,j;
	scanf("%d",&number);
	
	if(number!=0){
	
		for(i=0;number>0;i++){
			binary[i]=(number%2);
			number /= 2;
		}
		
		for(j=i-1;j>=0;j--){
			
			printf("%d",binary[j]);
			
		}
}

	else	printf("0");
	

}