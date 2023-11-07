#include <stdio.h>
#include <locale.h>

/*
Escreva um algoritmo que leia um número inteiro A e uma matriz M(5,5) de números.
Conte quantos valores iguais a A estão na matriz.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int a, m[5][5];
		int cont = 0;
		
		printf("Digite o valor de A: ");
		scanf("%i", &a);
		
		printf("\n");
		
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("\nm[L%i][C%i]: ", i, j);
            	scanf("%i", &m[i][j]);
            	
            	if (m[i][j] == a) {
            		cont++;
				}
			}
		}
		
		printf("\nExistem %i valores iguais a A dentro da matriz\n", cont);
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


