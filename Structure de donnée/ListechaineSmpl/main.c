#include<stdio.h>
#include<stdlib.h>
#include "AjouterFin.h"
#include "AjouterMillieu.h"
#include "afficherListe.h"
#include "SupprimerDebut.h"
#include "SupprimerDebutAdresse.h"
#include "SupprimerFin.h"
#include "SupprimerMillieu.h"

int main(){
	
	Box *L1=NULL;
	int nbr,a,i,b,chx;
	printf("Donner le nbr d'element de la liste : ");
	scanf("%d",&nbr);
	
	for(i=0;i<nbr;i++){
		printf("donner l'element N%d :",i+1);
		scanf("%d",&a);
		L1=ajouterFin(L1,a);
	}
	
	afficher(L1);	
	printf("\n");
	printf("donnerz l'element que vous voulez l'insere au millieu :\n");
	scanf("%d",&a);
	printf("donnerz l'element apres lequel vous vous voulez inserer l'element :\n");
	scanf("%d",&b);
	printf("\n---------------------\n");
	L1=ajouterMillieu(L1,a,b);
	afficher(L1);
	printf("\n---------------------\n");
	
	
	/* la 1ère methode 
	
	L1=supprimerDebut(L1);
	afficher(L1);
	
	*/
	
	
	supprimerDebutPA(&L1);
	afficher(L1);
	
	printf("\n---------------------\n");
	
	
	/* la 1ère methode 
	
	L1=supprimerFin(L1);
	afficher(L1);
	
	*/
	
	
	supprimerFinPA(&L1);
	afficher(L1);
	
	printf("\n---------------------\n");
	
	printf("entrer l'element que vous voulez supprimer :");
	scanf("%d",&a);
	
	L1=supprimerMillieu(L1,a);
	afficher(L1);
	
	
	
	
	
	
	/*on peut ecrit juste 
			L1=ajouterMillieu(L1,a,b);
			afficher(L1); 
	*/
	
	//cette boucle optinal rir bax kol mara t demandé mne user s'il veux inserer una autre fois
	/*
	while(1){
		printf("taper 0 si vous voulez sortir et 1 si vous voulez inserer une autre fois un element au millieu :");
		scanf("%d",&chx);
		if(chx==1){
			printf("donnerz l'element que vous voulez l'insere au millieu :\n");
			scanf("%d",&a);
			printf("donnerz l'element apres lequel vous vousvoulez inserer l'element :\n");
			scanf("%d",&b);
			L1=ajouterMillieu(L1,a,b);
			afficher(L1);
			printf("\n---------------------\n");
		}
		if(chx==0) break;
		
	}
		
	*/
	return 0;
}
