#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sen;
	
	printf ("Escreva uma senha de 4 dígitos: \n");
	scanf("%d", &sen);

    //se você colocar um número com 5 dígitos primeiro e depois um de 3 dígitos ou menos ele da como acesso negado, porque o programa não volta no código anterior ;-;
	
	if (sen < 1000){
		while(sen < 1000){
		printf("4 dígitos por favor: \n");
		scanf("%d", &sen);
	    }
	}
	if (sen > 9999){
		while(sen > 9999){
		printf("4 dígitos por favor: \n");
		scanf("%d", &sen);
	    }
	}
	if (sen == 1234){
		printf("ACESSO CONCEDIDO \n");
	}
	else {
		printf("ACESSO NEGADO \n");
	}
	
	system("pause");
}
