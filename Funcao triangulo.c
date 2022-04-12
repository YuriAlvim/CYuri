#include<stdio.h>
#include<locale.h>

tri(int a, int  b, int c){
	if ((a == b) && (a == c) ){
		printf("Triangulo equilátero \n");
	} else {
		if ((a == b) || (a == c) || (b == c)){
			printf("Triangulo isósceles \n");
		}else{
			printf("Triangulo escaleno \n");
		}
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int l1, l2, l3;
	printf("Entre com o valor de a: \n ");
	scanf("%d", &l1);
	printf("Entre com o valor de b: \n");
	scanf("%d", &l2);
	printf("Entre com o valor de c: \n");
	scanf("%d", &l3);
	tri(l1, l2, l3);
	
	
	system("pause");
}
