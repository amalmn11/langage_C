#include <stdio.h>


int main(){
	int N,compteur,x,i,premier;
	printf("Entrer le nombre N : ");
    scanf("%d", &N);
    int tab[N];
    compteur=0;
    x=2;
	do{
		premier=1;
		for(i=2;i<=x/2;i++){
			if(x%i==0){
				premier=0;
				break;
			}
		}
		if(premier==1){
				tab[compteur]=x;
				compteur++;
		}
		x++;
		
	}while(compteur<N);
	 for(i=0; i<N; i++){
        printf("Tab[%d] = %d\n", i, tab[i]);
    }	
	
}
