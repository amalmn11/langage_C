#include<stdio.h>
#include<stdlib.h>
#include "liste.h"

//cette methode de prof H plus clair et plus logic
Box* ajouterMillieu(Box* debut,int a,int elt){
	Box *b,*temp;
	if(debut==NULL){
		printf(" la liste est vide");
	}else{
		
		b=(Box*)malloc(sizeof(Box));
		b->data=a;
		temp=debut;
		
		while(temp!=NULL && temp->data!=elt){
			temp=temp->next;
		}
		/*
		si on sort de la boucle et temp n'atteind pas la fin de la liste c-à-d que on temp poite sur elt et il trouve le trouve 
		maintement on peut inserer l'element a apres l'element elt
		*/
		if(temp!=NULL){
			b->next=temp->next;
			temp->next=b;
		}else{
			printf("L'element %d n'existe pas !!\n",elt);
		}
	
	}	
	return debut;
}




//il existe un erreur au niveau de ces deux fonction je ne sais pas ou
/*
Box* ajouterMillieu(Box* debut,int a,int elt){
	Box *b,*temp;
	b=(Box*)malloc(sizeof(Box));
	b->data=a;
	temp=debut;
	while(temp!=NULL){
		
		if(temp->next!=NULL && temp->data!=elt){
			temp=temp->next;
		}else{
			
			if(temp!=NULL){
				b->next=temp->next;
				temp->next=b;
			}
			
		}
	
	} 
	if(temp==NULL && temp->data!=elt) printf("L'element %d n'existe pas !!\n",elt);
			
	return debut;
}
*/

/*
Box* ajouterMillieu(Box* debut,int a,int elt){
	Box *b,*temp;
	b=(Box*)malloc(sizeof(Box));
	b->data=a;
	temp=debut;
	while(temp->next!=NULL && temp->data!=elt){
		temp=temp->next;
	} 
	if(temp!=NULL){
		b->next=temp->next;
		temp->next=b;
	}else{
		printf("l'element n'existe pas !!");
	}
	return debut;
	
}


*/
