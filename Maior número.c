#include <stdio.h>
#include <locale.h>
main (){
  setlocale(LC_ALL, "Portuguese");

  int n1, n2;

  printf("Digite o primeiro n�mero: \n");
  scanf("%d", &n1);
  printf("Digite o segundo n�mero: \n");
  scanf("%d", &n2);

  if (n1 > n2){
  	printf("O primeiro n�mero � o maior \n");
  }
  if (n2 > n1){
  	printf("O segundo n�mero � o maior \n");
  }
  else {
  	printf("Esses n�meros s�o iguais \n");
  }
  
  system ("pause");

}
