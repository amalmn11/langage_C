#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

typedef struct MyPile{
	
	int Pile[50];
	int taille;
	int sommet;
	
}MyPile;


int estvide(MyPile p){
	
	if(p.sommet==0){
		return 1;
	}
	else{
		return 0;
	}
	/* ou on peut faire juste ça 
	
		return sommet==0; 
		
		c-à-d si sommet==0 return 1 sinon return 0;
	
	
	*/
}



int estpleine(MyPile p){
	
	return p.sommet==p.taille;
		
	
}


void empiler(MyPile* p,int e){
	
	p->Pile[p->sommet]=e;
	p->sommet++;
	
}

int depiler(MyPile* p){
	int r;
	p->sommet--;
	r=p->Pile[p->sommet];
	
	return r;
}











#endif
