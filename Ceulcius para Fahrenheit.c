#include<stdio.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	int c;
	float f;
	
	printf("Digite uma temperatura em °C: \n");
	scanf("%d", &c);
	
	f = c * 1.8 + 32;
	
	printf("Isso em Fahreinheit é: %f", f);
	printf("\n");
	
	system("pause");
}
