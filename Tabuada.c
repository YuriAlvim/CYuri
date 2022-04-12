#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, cont, res;
	
	cont = 0;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	while(cont < 10){
		cont = cont + 1;
		res = n * cont;
		printf("%d x %d = %d \n", n, cont, res);
	}
	
		system("pause");
}
