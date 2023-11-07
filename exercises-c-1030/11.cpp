#include <stdio.h>
#include <locale.h>

/*
Escrever um algoritmo que leia uma Matrix M (5,3). Descubra o menor valor desta
matriz e escreva-o juntamente com o conteúdo da Matriz.
*/

#define rows 5
#define cols 3

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols];
    	int menor = 0;
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("M[%i][%i]: ", i, j);
    			scanf("%i", &m[i][j]);
    			
    			if (i == 0 && j == 0){
    				menor = m[i][j];
				} else if (m[i][j] < menor) {
					menor = m[i][j];
				}
			}
		}
		
		printf("\nMATRIZ:\n");
		for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("%i ", m[i][j]);
    		}
    		printf("\n");
    	}
    	
    	printf("\nMenor valor da matriz: %i\n", menor);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

