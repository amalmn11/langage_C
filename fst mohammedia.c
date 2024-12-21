#include<stdio.h>
int main(){
	int T[]={12,23,34,45,56,67,78,89,90};
	int *p;
	p=T;
	printf("%d\n",*p+2);
	printf("%d\n",*(p+2));
	/*printf("%p\n",T+3);			
	printf("%p\n",&T[4]-3);	
	printf("%d\n",p+(*p-10));*/
	printf("%d\n",*(p+ *(p+8)-T[7]));	
}
