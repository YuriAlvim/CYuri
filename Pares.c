#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	
	cont = 0;
	
	while(cont < 100){
		cont = cont + 1;
		if (cont % 2 == 0){
			printf("%d \n",cont);
		}
		
	}
	
		system("pause");
}
