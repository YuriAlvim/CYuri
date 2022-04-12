#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
    
    int i;
    
    for (i = 0; i <=100; i = i+1) {
    	if (i % 2 == 0){
    		printf("%d \n", i);
		}
	}
		system("pause");
}
