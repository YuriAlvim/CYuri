#include<stdio.h>
#include<locale.h>

tri(int a, int  b, int c){
	if ((a == b) && (a == c) ){
		printf("Triangulo equilátero");
	} else {
		if ((a == b) || (a == c) || (b == c)){
			printf("Triangulo isósceles");
		}else{
			printf("Triangulo escaleno");
		}
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int l1, l2, l3;
	printf("Entre com o valor de a: ");
	scanf("%d", &l1);
	printf("Entre com o valor de b: ");
	scanf("%d", &l2);
	printf("Entre com o valor de c: ");
	scanf("%d", &l3);
	tri(l1, l2, l3);
	
	
	system("pause");
}
