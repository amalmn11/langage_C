#include<stdio.h>
#include<stdlib.h>
#include "liste.h"


Box* ajouterFin(Box* debut,int a){
	Box* b,*temp;
	b=(Box*)malloc(sizeof(Box));
	b->data=a;
	b->next=NULL;
	temp=debut;
	if(debut==NULL){
		debut=b;
	}else{
		//temp=debut; on peut la faire ici
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=b;
	}
	return debut;
}
