#include<stdio.h>
#include<stdlib.h>


void convertir(int a)
{
	if(a!=0)
	{
		convertir(a/2);
		printf("%d",a%2);
	}
}

int main()
{
	int a;
	printf("entrer un nombre decimale:");
	scanf("%d",&a);
	printf("ce nombre en binaire est :");
	convertir(a);
	return ((int)0);
}

