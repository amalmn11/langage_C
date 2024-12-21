#include<stdio.h>
#include "pile.h"

void main(){
	MyPile P;
	int n;
	P.sommet=0;
	printf("donnez la taille de la pile :");
	scanf("%d",&P.taille);
	
	while(!estpleine(P)){
		printf("donnez une valeur :");
		scanf("%d",&n);
		empiler(&P,n);
	}
	while(!estvide(P)){
		int d;
		d=depiler(&P);
		printf("%d\t",d);
	}
	
}

