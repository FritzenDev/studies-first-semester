#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		float raio, calc;
		const float pi = 3.14;
		
		printf("Escreva o raio: ");
		scanf("%f", &raio);
		
		calc = pi * pow(raio, 2);
		
		printf("A área do raio %.2f é: %.2f\n", raio, calc);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


