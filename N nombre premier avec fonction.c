#include <stdio.h>

int estPremier(int A){
    int i;
    for(i=2;i<=A/2;i++){
        if(A%i==0){
            return 0; // A n'est pas premier
        }
    }
    return 1; // A est premier
}

int main(){
    int N, compteur=0,i, a=1;
    printf("Entrer le nombre N : ");
    scanf("%d", &N);
    int tab[N];
    
    while(compteur< N){
        if(estPremier(a)){
            tab[compteur] = a;
            compteur++;
        }
        a++;
    }
    
    for(i=0; i<N; i++){
        printf("Tab[%d] = %d\n", i, tab[i]);
    }
    
    return 0;
}

