#include <stdio.h>
#include <locale.h>
main (){
  setlocale(LC_ALL, "Portuguese");

  int n1, n2;

  printf("Digite o primeiro número: \n");
  scanf("%d", &n1);
  printf("Digite o segundo número: \n");
  scanf("%d", &n2);

  if (n1 > n2){
  	printf("O primeiro número é o maior \n");
  }
  if (n2 > n1){
  	printf("O segundo número é o maior \n");
  }
  else {
  	printf("Esses números são iguais \n");
  }
  
  system ("pause");

}
