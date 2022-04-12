#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
    
    int i;
    
    for (i = 1; i <=50; i = i+1) {
    	printf("%d \n", i);
	}
		system("pause");
}
