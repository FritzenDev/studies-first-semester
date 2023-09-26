#include <stdio.h>
#include <locale.h>

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
? para homens: (72.7 * h) – 58;
? para mulheres: (62.1 * h) – 44.7
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		char gen;
		float h, calcH, calcM;
		
		printf("Digite a sua altura: ");
		scanf("%f", &h);
		
		printf("Digite seu gênero (H - Homem | M - Mulher): ");
		scanf("%s", &gen);
		
		calcH = (72.7 * h) - 58;
		calcM = (62.1 * h) - 44.7;
		
		switch (gen) {
			case 'H':
				printf("O seu peso ideal seria: %.2f\n", calcH);
				break;
			case 'M':
				printf("O seu peso ideal seria: %.2f\n", calcM);
				break;
			case 'h':
				printf("O seu peso ideal seria: %.2f\n", calcH);
				break;
			case 'm':
				printf("O seu peso ideal seria: %.2f\n", calcM);
				break;
			default:
				printf("Você digitou algo errado!");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


