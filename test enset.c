#include<stdio.h>
int main(){
int a=256;
char *x= (char *)&a;
(*x)++= 1;
*x =x[0]++;
printf("a=%d\n", a);
return 0;
}
