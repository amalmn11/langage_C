#include <stdio.h>
#include <string.h>
void main(){
char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);

}
