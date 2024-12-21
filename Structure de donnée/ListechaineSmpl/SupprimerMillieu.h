#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

//il existe un pmrobleme ici au niveau de cas ou l'element n'existe pas  

Box* supprimerMillieu(Box* debut,int v){
	
	Box* p,*temp;
	if(debut==NULL){
		printf(" la liste est vide");
	}else{
		if(debut->data==v){
			p=debut;
			debut=debut->next;
			free(p);
		}else{
			temp=debut;
			while(temp->next != NULL && temp->next->data != v){
				temp=temp->next;
			}
			if(temp->next!=NULL){
				p=temp->next;
				temp->next=temp->next->next;
			}else{
				printf(" l'element que vous avez inserer n'existe pas \n");
			}
			free(p);
		}
	}
	return debut;
}




/*
voila la solution de chatgpt mais il contient aussi meme probleme 


Box* supprimerMillieu(Box* debut, int v) {
    Box* p, *temp, *prev;
    
    if (debut == NULL) {
        printf("La liste est vide\n");
        return debut;
    }

    if (debut->data == v) {
        p = debut;
        debut = debut->next;
        free(p);
        return debut;
    }

    temp = debut;
    prev = NULL;

    while (temp != NULL && temp->data != v) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("L'élément que vous voulez supprimer n'existe pas dans la liste\n");
        return debut; // Aucune modification nécessaire car l'élément n'a pas été trouvé.
    }

    prev->next = temp->next;
    free(temp);
    
    return debut;
}
*/
