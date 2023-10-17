#include <stdio.h>
#include <locale.h>

/*
Um operário que está construindo um muro, consegue erguer o muro 6 cm
por dia. Calcule e escreva quantos dias serão necessários para que o muro
atinja o tamanho desejado pelo proprietário.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float tamanho, conv;
		int eDia = 6, cont;
		
		printf("Digite quantos centímetros de muro você deseja erguer: ");
		scanf("%f", &tamanho);
		
		cont = tamanho / eDia;
		
		printf("Será necessário %i dias para erguer o muro", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


