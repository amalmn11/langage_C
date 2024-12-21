#include <stdio.h>

int main(){
	int a, b,n1,n2,i,ppcm;
    printf("Entrer deux nombres : ");
    scanf("%d %d", &a, &b);
    for(i=1;i<=(a*b);i++){
    	n1=a*i;
    	n2=b*i;
    	if(n1==n2){
    		ppcm=n1;
		}
	}
	printf("le PPCM est : %d",ppcm);
	
}
