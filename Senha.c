#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sen;
	
	printf ("Escreva uma senha de 4 d�gitos: \n");
	scanf("%d", &sen);

    //se voc� colocar um n�mero com 5 d�gitos primeiro e depois um de 3 d�gitos ou menos ele da como acesso negado, porque o programa n�o volta no c�digo anterior ;-;
	
	if (sen < 1000){
		while(sen < 1000){
		printf("4 d�gitos por favor: \n");
		scanf("%d", &sen);
	    }
	}
	if (sen > 9999){
		while(sen > 9999){
		printf("4 d�gitos por favor: \n");
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
