#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

void afficher(Box* debut){
	Box* temp;
	temp=debut;
	if(debut==NULL){
		printf("la liste est vide");
	}else{
		//on peut l'ecrire ici --> temp=debut;
		while(temp!=NULL){
			printf("%d",temp->data);
			printf("\t");
			temp=temp->next;
		}
		
	}
	
}

