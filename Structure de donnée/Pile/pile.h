#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

typedef struct{
	
	int taille;
	int sommet;
	int Pile[50];
	
}MyPile;


int estvide(MyPile p){
	return p.sommet==0;
}


int estpleine(MyPile p){
	return p.sommet==p.taille;
}


void empiler(MyPile* p,int v){
	p->Pile[p->sommet]=v;
	p->sommet++;
}

int depiler(MyPile* p){
	
	int r;
	p->sommet--;
	r=p->Pile[p->sommet];
	return r;
	
	
}


#endif
