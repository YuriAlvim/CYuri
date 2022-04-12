#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
    
    int cont;
    
    cont = 0;
    
    while(cont <= 2){
    	printf("%d \n", cont);
    	cont = cont - 1;
	}
	
		system("pause");
}
