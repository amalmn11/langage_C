#include <stdio.h>

int pgcd(int a,int b){
	int r,q;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		q=r;
		r=a%b;
	}
	return q;
}
int main(){
	int a,b,PGCD,PPCM;
	printf ("entrer deux nombres:");
	scanf("%d %d",&a,&b);
	PGCD=pgcd(a,b);
	PPCM=(a*b)/PGCD;
	printf("le PPCM de %d et %d est : %d",a,b,PPCM);
}
