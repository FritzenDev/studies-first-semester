#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que lê um número e verificar se ele é par ou é
ímpar. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		printf("Digite seu número: ");
		scanf("%i", &num);
		
		if (num 2==0) {
			printf("%i é par\n", num);
		}
		else {
			printf("%i é impar\n", num);
		} 
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


