#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano, idade;
	
	printf("Digite o ano que voc� nasceu: \n");
	scanf("%d", &ano);
	
	idade = 2022 - ano;
	
	if(idade >= 16){
		printf("Voc� j� pode votar esse ano, pois tem %d anos \n", idade);
	}
	else{
		printf("Voc� ainda n�o pode votar, pois tem %d anos \n", idade);
	}
	
	system("pause");
}
