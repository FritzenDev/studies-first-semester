#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela
de bingo. Sabendo que cada cartela devera conter 5 linhas de 5 números, gere estes
dados de modo a não ter números repetidos dentro das cartelas. O programa deve
exibir na tela a cartela gerada
de modo a não ter números repetidos dentro das cartelas.
*/

#define rows 5
#define cols 5

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols] = {0};
    	int numSor[100] = {0};
    	int cont = 0;
    	
    	srand(time(NULL));
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			int num;
    			
    			do {
    				num = rand() % 100;
				} while (numSor[num] == 1);
				
				m[i][j] = num;
				numSor[num] = 1;
				cont++;
    		}
    	}
    	
    	printf("Cartela de Bingo:\n");
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("|%3i| ", m[i][j]);
    		}
    		printf("\n");
    	}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

