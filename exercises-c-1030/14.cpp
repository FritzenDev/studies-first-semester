#include <stdio.h>
#include <locale.h>

/*
Faça um programa que gere uma matriz 8X8 preenchendo com ‘X’ as células da área
hachurada da matriz abaixo.
*/

#define rows 8
#define cols 8

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		char m[rows][cols];
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (j <= i) {
					m[i][j] = 'X';
				} else {
					m[i][j] = ' ';
				}
			}
		}
		
		printf("\nMATRIZ:\n");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%c ", m[i][j]);
			}
			printf("\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


