#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que lê 10 valores inteiros e os armazena em um vetor. O
programa deve trocar valores no vetor conforme as duas posições
especificadas pelo números digitados pelo usuário. As posições especificadas
pelo usuário correspondem aos índices do vetor. 
*/

#define length 10

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[length];
    	
    	printf("Digite 10 valores inteiro:\n");
    	for (int i = 0; i < length; i++) {
    		printf("%i° Valor: ", i+1);
    		scanf("%i", &x[i]);
		}
		
		int pos1, pos2;
		printf("Digite as posições que deseja trocar (índices de 0 a 9): ");
		scanf("%i %i", &pos1, &pos2);
		
		if (pos1 < 0 || pos1 >= length || pos2 < 0 || pos2 >= length) {
			printf("Posições inválidas. Os índices devem estar entre 0 e 9.\n");
			break;
		} else {
			int temp = x[pos1];
			x[pos1] = x[pos2];
			x[pos2] = temp;
			
			printf("\nVetor com as posições trocadas:\n");
			for (int i = 0; i < length; i++) {
				printf("%i ", x[i]);
			}
			printf("\n");
		}
		

		
    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

