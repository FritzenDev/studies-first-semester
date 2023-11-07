#include <stdio.h>
#include <locale.h>

/*
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui
*/

#define rows 4
#define cols 4

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols], cont = 0;
    	
    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < cols; j++) {
    			printf("m[%i][%i]: ", i, j);
    			scanf("%i", &m[i][j]);
    			
    			if (m[i][j] > 10) {
    				cont++;
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
    	
    	printf("\nA matriz tem %i valores maiores que 10\n", cont);
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

