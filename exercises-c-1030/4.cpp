#include <stdio.h>
#include <locale.h>

/*
Escreva um algoritmo que lê uma matriz M(5,5). Substitua, a seguir, todos os valores
negativos da matriz por zero. Após, escreva a matriz modificada. 
*/

#define rows 5
#define cols 5

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols];
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("\nm[L%i][C%i]: ", i, j);
            	scanf("%i", &m[i][j]);
				
				if (m[i][j] < 0) {
					m[i][j] = 0;
				}
			}
		}
		
		printf("\n");
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%i ", m[i][j]);
			}	
			printf("\n");
		}
		printf("\n");
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


