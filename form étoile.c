#include <stdio.h>

void main(){
	int i,j,L;
	printf("entrer le nonbre de lignes : ");
	scanf("%d",&L);
	for(i=L;i>=1;i--){
			for(j=i;j<=L;j++){
				if(i<=L){
					printf(" ");
				}else{
					printf("* ");
				}
					
			}
			printf("\n");
			
			       
	}
}
