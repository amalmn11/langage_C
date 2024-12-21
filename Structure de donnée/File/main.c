#include <stdio.h>
#include <stdlib.h>
#include "file.h"

void main(){

	Myfile f;
	int a;
	f.queue=0;
	f.tete=0;
	printf("Donnez la taille de la file :");
	scanf("%d",&f.taille);
	while(!estpleine(f)){
		printf("donnez une valeur :");
		scanf("%d",&a);
		enfiler(&f,a);
	}
	while(!estvide(f)){
		printf("%d",defiler(&f));
		printf("\t");
	}
}
