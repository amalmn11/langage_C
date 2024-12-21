#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

Box* ajouterAuDebut(Box* debut,int d){
	Box* b;
	b=(Box*)malloc(sizeof(Box));
	b->data=d;
	b->next=debut;
	debut=b;
	return debut;
}
