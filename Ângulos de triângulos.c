#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ang1, ang2, ang3;
	printf("Digite o valor do 1� �ngulo: \n");
	scanf("%d", &ang1);
	printf("Digite o valor do 2� �ngulo: \n");
	scanf("%d", &ang2);
	printf("Digite o valor do 3� �ngulo: \n");
	scanf("%d", &ang3);
	
	if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
		printf("Esse � um Triangulo Obtus�ngulo \n");
	} else {
		if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
			printf("Esse � um Triangulo Ret�ngulo \n");
		}else{
			printf("Esse � um Triangulo Acut�ngulo \n");
		}
	}
	
		system("pause"); 
}
