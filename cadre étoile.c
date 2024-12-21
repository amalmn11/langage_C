#include <stdio.h>

void main(){
	int i,j,L,C;
	printf("entrer le nonbre de lignes : ");
	scanf("%d",&L);
	printf("entrer le nonbre de colonnes : ");
	scanf("%d",&C);
	for(i=1;i<=L;i++){
			for(j=1;j<=C;j++){
				if(i==1 || i==L || j==1 || j==C){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
	}
}
