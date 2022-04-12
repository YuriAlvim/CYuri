#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valora, valorb, valorc;
	
	printf("Entre com o valor A, B e C, respectivamente:");
	scanf("%d %d %d", valora, valorb, valorc);
	
	if((valora > valorb) && (valorb > valorc)){
		printf("A sequência é: %d %d %d", valora, valorb, valorc);
	}
	if((valora > valorb) && (valorc > valorb)){
		printf("A sequência é: %d %d %d", valora, valorb, valorc);
	}
	if((valorb > valora) && (valora > valorc)){
		printf("A sequência é: %d %d %d", valorb, valora, valorc);
	}
	if((valorb > valora) && (valorc > valora)){
		printf("A sequência é: %d %d %d", valorb, valora, valorc);
	}
	if((valorc > valora) && (valora > valorb)){
		printf("A sequência é: %d %d %d", valora, valorb, valorc);
	}
	if((valorc > valorb) && (valorb > valora)){
		printf("A sequência é: %d %d %d", valora, valorb, valorc);
	}
	
	system("pause");
}
