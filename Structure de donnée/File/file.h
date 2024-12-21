#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED


typedef struct{
	
	int tete;
	int queue;
	int taille;
	int File[50];
	
}Myfile;

int estvide(Myfile f){
	
	return f.tete==f.queue;
	
}

int estpleine(Myfile f){
	
	return f.queue==f.taille;
}

void enfiler(Myfile* f,int v){
	
	f->File[f->queue]=v;
	f->queue++;
	
}

int defiler(Myfile* f){
	int r;
	r=f->File[f->tete];
	f->tete++;
	return r;
}







#endif
