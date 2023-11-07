#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da for
ma:
A[i][j] = 2*i + 7*j + 2 se i < j;
A[i][j] = 3*i^2 +1 se i = j ;
A[i][j] = 4*i^3 + 5*j^2 + 1 se i > j.
*/

#define rows 10
#define cols 10

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols];
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("m[%i][%i]: ", i, j);
    			scanf("%i", &m[i][j]);
    			
    			if (i < j) {
    				m[i][j] = (2 * i) + (7 * j) + 2;
				} else if (i == j) {
					m[i][j] = (3 * pow(i, 2)) + 1;
				} else {
					m[i][j] = (4 * pow(i, 3)) + (5 * pow(j, 2)) + 1;
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

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

