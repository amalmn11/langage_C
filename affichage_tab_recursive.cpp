#include<stdio.h>
#include<stdlib.h>



void afficher(int T[5],int nb)
{
	if(nb!=0)
	{
		afficher(T,nb-1);
		//pour afficher l'element de l'indice 0
		printf("| %d |",T[nb-1]);
	}
}

int main()
{
	int nb=5;
	int T[5];
	int i;
	printf("remplir le tableau:\n");
	
	for(i=0;i<nb;i++)
	{
		printf("entrer la valeur N° %d:",i+1);
		scanf("%d",&T[i]);
	}
	afficher(T,nb);
	return ((int)0);
}

