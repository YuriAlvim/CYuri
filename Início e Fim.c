#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ini, fim;
	
    printf("Escreva os n�meros de in�cio e fim, respectivamente, de uma contagem: \n");
    scanf("%d %d", &ini, &fim);

    ini = ini - 1;

	while(ini < fim){
		ini = ini + 1;
		printf("%d \n",ini);
	}
	
		system("pause");
}
