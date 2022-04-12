#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano, idade;
	
	printf("Digite o ano que você nasceu: \n");
	scanf("%d", &ano);
	
	idade = 2022 - ano;
	
	if(idade >= 16){
		printf("Você já pode votar esse ano, pois tem %d anos \n", idade);
	}
	else{
		printf("Você ainda não pode votar, pois tem %d anos \n", idade);
	}
	
	system("pause");
}
