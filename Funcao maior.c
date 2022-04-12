#include <stdio.h>
#include <locale.h>

qua (int var1, int var2){
	if (var1 = var2){
		printf("É um quadrado");
	}
	else {
		printf("É um retângulo");
	}

}

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	
	printf("Entre com o valor da base e da altura de um quadrilátelo: \n");
	scanf("%d %d",&a ,&b);
	qua(a, b));

	system("pause");
}
