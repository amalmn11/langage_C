#include <stdio.h>
#include <string.h>
int main(){
int myAge; // an int variable
printf("enter a value : ");
scanf("%d",&myAge);
printf("%d\n", myAge);  // Outputs the value of myAge (43)
printf("%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
}
