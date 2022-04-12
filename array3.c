#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float notas[5];
	
	printf("Entre com os valores das notas, um de cada vez \n");
	
	for(i=0; i<=4; i++){
		scanf("%f", &notas[i]);
	}
	
	printf("Exibir os valores do array \n \n");
	
	for(i=0; i<=4; i++){
		printf("notas[%d] = %f \n", i, notas[i]);
	}
	
	system("pause");
}
