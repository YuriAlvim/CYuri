#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int l1, l2, l3;
	printf("Entre com o valor de a: ");
	scanf("%d", &l1);
	printf("Entre com o valor de b: ");
	scanf("%d", &l2);
	printf("Entre com o valor de c: ");
	scanf("%d", &l3);
	
	if ((l1 == l2) && (l1 == l3) ){
		printf("Triangulo equilátero");
	} else {
		if ((l1 == l2) || (l1 == l3) || (l2 == l3)){
			printf("Triangulo isósceles");
		}else{
			printf("Triangulo escaleno");
		}
	}
	
		system("pause");
}
