#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	
	cont = 0;
	
	while(cont < 50){
		cont = cont + 1;
		printf("%d \n",cont);
	}
	
		system("pause");
}
