#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		float km, hr, calc;
		
		printf("Escreva os Km percorridos: ");
		scanf("%f", &km);
		
		printf("Escreva quantas horas levou: ");
		scanf("%f", &hr);
		
		calc = km / hr;
		
		printf("A velocidade média foi: %.fKm/h\n", calc);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


