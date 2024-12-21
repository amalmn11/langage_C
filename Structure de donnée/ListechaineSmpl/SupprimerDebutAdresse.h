#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

void supprimerDebutPA(Box** debut){
	Box* temp;
	if(*debut==NULL){
		printf(" la liste est vide");
	}else{
		temp=*debut;
		*debut=(*debut)->next;
		// debut=temp->next; ==>meme chose 
		free(temp);
	}

}
