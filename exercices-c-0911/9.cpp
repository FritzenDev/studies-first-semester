#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		float comp, larg, altu, area_parede, quantidade_caixas;
		
		printf("Escreva o comprimento: ");
		scanf("%f", &comp);
		
		printf("Escreva largura: ");
		scanf("%f", &larg);
		
		printf("Escreva a altura: ");
		scanf("%f", &altu);
	
		area_parede = 2 * altu * (comp + larg);
		
		quantidade_caixas = area_parede / 1.5;
		
		printf("A quantidade de caixas de azulejos necessárias será: %.2f\n", quantidade_caixas);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


