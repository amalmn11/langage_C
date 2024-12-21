#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

Box* supprimerFin(Box* debut){
	Box* temp;
	if(debut==NULL){
		printf("la liste est vide !!\n");
	}else{
		if(debut->next==NULL){
			free(debut);
			debut=NULL;
		}else{
			temp=debut;
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}
		
	}
	return debut;
}

void supprimerFinPA(Box** debut){
	Box* temp;
	if(*debut==NULL){
		printf("la liste est vide !!\n");
	}else{
		if((*debut)->next==NULL){
			free(*debut);
			*debut=NULL;
		}else{
			temp=*debut;
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}		
	}
}
