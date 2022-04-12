#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ang1, ang2, ang3;
	printf("Digite o valor do 1° ângulo: \n");
	scanf("%d", &ang1);
	printf("Digite o valor do 2° ângulo: \n");
	scanf("%d", &ang2);
	printf("Digite o valor do 3° ângulo: \n");
	scanf("%d", &ang3);
	
	if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
		printf("Esse é um Triangulo Obtusângulo \n");
	} else {
		if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
			printf("Esse é um Triangulo Retângulo \n");
		}else{
			printf("Esse é um Triangulo Acutângulo \n");
		}
	}
	
		system("pause"); 
}
