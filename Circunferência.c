#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	float cir;
	int r;
	
	printf("Digite o raio de uma circunferencia: \n");
	scanf("%d", &r);
	
	cir = 3.14 * (r * r);
	
	printf("A area dessa circunferencia e de: %f", cir);
	printf("\n");
	
	system("pause");
}
