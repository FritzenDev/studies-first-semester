#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que l� 10 valores inteiros e os armazena em um vetor. O
programa deve trocar valores no vetor conforme as duas posi��es
especificadas pelo n�meros digitados pelo usu�rio. As posi��es especificadas
pelo usu�rio correspondem aos �ndices do vetor. 
*/

#define length 10

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[length];
    	
    	printf("Digite 10 valores inteiro:\n");
    	for (int i = 0; i < length; i++) {
    		printf("%i� Valor: ", i+1);
    		scanf("%i", &x[i]);
		}
		
		int pos1, pos2;
		printf("Digite as posi��es que deseja trocar (�ndices de 0 a 9): ");
		scanf("%i %i", &pos1, &pos2);
		
		if (pos1 < 0 || pos1 >= length || pos2 < 0 || pos2 >= length) {
			printf("Posi��es inv�lidas. Os �ndices devem estar entre 0 e 9.\n");
			break;
		} else {
			int temp = x[pos1];
			x[pos1] = x[pos2];
			x[pos2] = temp;
			
			printf("\nVetor com as posi��es trocadas:\n");
			for (int i = 0; i < length; i++) {
				printf("%i ", x[i]);
			}
			printf("\n");
		}
		

		
    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

