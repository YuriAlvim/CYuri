#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
    
    int i, n, res;
    
    printf("Digite um número:");
    scanf("%d", &n);
    
    for (i = 1; i <=10; i = i+1) {
    	res = n * i;
		printf("%d x %d = %d \n", n, i, res);
	}
		system("pause");
}
