#include <stdio.h>
#include <locale.h>

/*
Escrever um algoritmo que leia uma matriz M(5,5) e crie dois vetores, SL(5) e SC(5),
que contenham, respectivamente as somas das linhas e das colunas de M. Escrever a
matriz e os vetores criados
*/

#define rows 5
#define cols 5

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols], sl[rows] = {0}, sc[cols] = {0};
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("m[L%i][C%i]: ", i, j);
				scanf("%d", &m[i][j]);
				
				sl[i] += m[i][j];
				sc[j] += m[i][j];
			}
		}
		
		printf("\n");
		
		printf("MATRIZ: \n");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
		
		printf("\nSOMA DAS LINHAS: \n");
		for (int i = 0; i < rows; i++) {
			printf("%d ", sl[i]);
		}
		printf("\n");
		
		printf("\nSOMA DAS COLUNAS: \n");
		for (int i = 0; i < cols; i++) {
			printf("%d ", sc[i]);
		}
		printf("\n");
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


