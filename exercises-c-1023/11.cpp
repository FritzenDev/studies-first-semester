#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que armazena n�meros em dois vetores de inteiros de cinco
elementos cada. Mostre o resultado da soma dos dois vetores em cada posi��o
comum.
*/

#define vet 5

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[vet], y[vet];
    	int result[vet] = {0};
		
		printf("Complete a primeira lista de n�meros: \n");
		for (int i = 0; i < vet; i++) {
			printf("%i�: ", i+1);
			scanf("%d", &x[i]);
		}
		printf("\nComplete a segunda lista de n�meros: \n");
		for (int i = 0; i < vet; i++) {
			printf("%i�: ", i+1);
			scanf("%d", &y[i]);
		}
		
		for (int i = 0; i < vet; i++) {
			result[i] = x[i] + y[i];
		}
		
		printf("\nSoma das duas listas: \n");
		for (int i = 0; i < vet; i++) {
			printf("Soma do %i�: %i\n", i+1, result[i]);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

