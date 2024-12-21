#include <stdio.h>

void main(){
	int i,j,L;
	printf("entrer le nonbre de lignes : ");
	scanf("%d",&L);
	for(i=1;i<=L;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
