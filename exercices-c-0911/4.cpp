#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
		
		float consumo, km1, kmF, volume;
		
		printf("Digite a Km inicial: ");
		scanf("%f", &km1);
		
		printf("Digite a Km final: ");
		scanf("%f", &kmF);
		
		printf("Digite o combustível consumido: ");
		scanf("%f", &volume);
		
		consumo = (kmF - km1) / volume;
		
		printf("O consumo médio em km/L é: %.2f\n", consumo);
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


