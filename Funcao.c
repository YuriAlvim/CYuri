#include <stdio.h>
#include <locale.h>

int num(){
	return 10;
}

ola(){
	printf("Olá você do outro lado da telinha \n");
}

soma (int var1, int var2){
	return var1 + var2;
}

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cal1, cal2;
	cal1 = 3;
	cal2 = 5;
	
	printf("O valor da soma é: %d \n", soma(cal1, cal2));
	printf("%d \n", num());
	ola();
	
	
	system("pause");
}
