#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

Box* supprimerDebut(Box* debut){
	Box* temp;
	if(debut==NULL){
		printf(" la liste est vide");
	}else{
		temp=debut;
		debut=debut->next;
		// debut=temp->next; ==>meme chose 
		free(temp);
	}
	return debut;
}
