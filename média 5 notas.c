#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, n5, media;
	
	printf("Digite as suas 5 notas, separadamente, para saber sua media: \n");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5 );
	
	media = (n1 + n2 + n3 + n4 + n5) / 5;
	
	if (media > 6){
		printf("Voc� foi aprovado(a). Sua m�dia foi: %d", media);
	}
	else {
		printf("Voc� foi reprovado(a). Sua m�dia foi: %d", media);
	}
	printf("\n");
	
	system("pause");
} 
