#include <stdio.h>
#include <string.h>
int main(){
int i,j,L,C;
printf("entrer le nobre de lignes : ");
scanf("%d",&L);
printf("entrer le nobre de colonnes :\n ");
scanf("%d",&C);
for(i=0; i<L ; i++)
	{
		for(j=0; j<C;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
