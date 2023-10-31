#include <stdio.h>
#include <locale.h>

/*
Modifique o programa anterior, de forma a informar quantos valores diferentes de A
estão na matriz M. 
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
            	
            	if (m[i][j] != a) {
            		cont++;
				}
			}
		}
		
		printf("\nExistem %i valores diferentes de A dentro da matriz\n", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


