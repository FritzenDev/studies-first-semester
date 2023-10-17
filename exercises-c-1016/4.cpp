#include <stdio.h>
#include <locale.h>

/*
Um oper�rio que est� construindo um muro, consegue erguer o muro 6 cm
por dia. Calcule e escreva quantos dias ser�o necess�rios para que o muro
atinja o tamanho desejado pelo propriet�rio.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float tamanho, conv;
		int eDia = 6, cont;
		
		printf("Digite quantos cent�metros de muro voc� deseja erguer: ");
		scanf("%f", &tamanho);
		
		cont = tamanho / eDia;
		
		printf("Ser� necess�rio %i dias para erguer o muro", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


