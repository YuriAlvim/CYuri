#include <stdio.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	int bs, alt, area;
	
	printf("Digite a medida da base do triangulo: \n");
	scanf("%d", &bs);
	printf("Digite a medida da altura do triangulo: \n");
	scanf("%d", &alt);
	
	area = (bs * alt) / 2;
	
	printf("A area desse triangulo e de: %d", area);
	printf("\n");
	
	system("pause");
}
