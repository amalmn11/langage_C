#include<stdio.h>
#include<stdlib.h>



int PGCD(int a,int b)
{
	int r;
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	return((int)a);
}

int main()
{
	int a,b;
	printf("entrer deux nombres :");
	scanf("%d%d",&a,&b);
	printf("PGCD de %d et %d est :%d",a,b,PGCD(a,b));
	return ((int)0);
}

