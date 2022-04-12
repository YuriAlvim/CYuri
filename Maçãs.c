#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float maca, valor;
	
	printf("Digite quantas maçãs você comprou: \n");
	scanf("%f", &maca);
	
	if (maca >= 12){
		valor = maca * 0.25;
	}
	else {
		valor = maca * 0.30;
	}
	
	printf("O valor que será pago por essas maçãs é de %f \n", valor);
	
	system("pause");
}
