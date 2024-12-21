#include <stdio.h>

int main(){
    int N,PR, i=0, a=2;
    printf("Entrer le nombre N : ");
    scanf("%d", &N);
    for(i=2;i<=N/2;i++){
        if(N%i!=0){
        	continue;PR=0;
        }
        else{
        	PR=1;
		}
    }
    if(PR==1){
    	printf("%d n'est pas un nbr premier",N);
	}else{
			printf("%d est un nbr premier",N);
	}
	

    
    
    
    
    return 0;
}

