#include <stdio.h>
#include <locale.h>

/*
Faça um programa que permita ao usuario entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional pela soma dos numeros de cada
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
*/

#define rows 3
#define cols 3

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols];
    	int soma[rows] = {0};
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("m[%i][%i]: ", i, j);
    			scanf("%i", &m[i][j]);
    			
    			soma[j] += m[i][j];
    		}
    	}
    	
    	printf("\nMATRIZ:\n");
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("%i ", m[i][j]);
    		}
    		printf("\n");
    	}
    	
    	printf("\nSOMA DAS COLUNAS:\n");
    	for (int j = 0; j < cols; j++) {
    		printf("%i\t", soma[j]);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

