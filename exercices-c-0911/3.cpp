#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		float C, F;
		
		printf("Escreva a temperatura em F°: ");
		scanf("%f", &F);
		
		C = (5*(F-32))/9;
		
		printf("A conversão indica: %.3f\n", C);
	
	   scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


