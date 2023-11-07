#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia uma matriz 4x4 e calcule a soma dos elementos da matriz
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int matriz[4][4];
    	int soma = 0;

    	printf("Digite os elementos da matriz 4x4:\n");
    	for(int i = 0; i < 4; i++) {
        	for(int j = 0; j < 4; j++) {
        		printf("\nm[L%i][C%i]: ", i, j);
            	scanf("%i", &matriz[i][j]);
            	soma += matriz[i][j];
        	}
    	}

    	printf("A soma dos elementos da matriz é: %i\n", soma);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


