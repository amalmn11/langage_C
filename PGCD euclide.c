#include <stdio.h>
int main(){
	int a,b,r,q;
	printf ("entrer deux nombres:");
	scanf("%d %d",&a,&b);
	while(a==0 || b==0){
		printf("entrer deux nombres non nul :");
		scanf("%d %d",&a,&b);
		printf("\n");
	}
	do
	{
		r=a%b;
		a=b;
		b=r;
		q=r;
		
	}while(r!=0);
	printf("le PGCD est: %d",a);
}
