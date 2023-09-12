#include <stdio.h>
#include <locale.h>

int main () {

	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
		float sal, horas, calc;
		
		printf("Digite quantas horas você trabalha: ");
		scanf("%f", &horas);
		
		printf("Digite quanto você ganha por hora: ");
		scanf("%f", &sal);
		
		calc = sal * horas;
		
		printf("Seu salário mensal: %.2f\n", calc);
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


