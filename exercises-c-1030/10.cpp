#include <stdio.h>
#include <locale.h>

/*
Escrever um algoritmo que leia um n�mero inteiro e uma matriz de 3X3 contendo
n�meros inteiros. Conte quantos elementos s�o iguais ao n�mero lido na matriz.
Escreva o total de n�meros iguais.
*/

#define rows 3
#define cols 3

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x, m[rows][cols];
    	int cont = 0;
    	
    	printf("Digite o valor de X: ");
    	scanf("%i", &x);
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("m[%i][%i]: ", i, j);
    			scanf("%i", &m[i][j]);
    			
    			if (x == m[i][j]) {
				cont++;
				}
			}
		}
		printf("\n\nMatriz:\n");
		for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("%i ", m[i][j]);
			}
			printf("\n");
		}
		
		printf("\nX foi digitado %i vezes dentro da matriz", cont);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

