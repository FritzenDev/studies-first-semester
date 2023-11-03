#include <stdio.h>
#include <locale.h>

/*
Faça um programa onde o usuário digita 10 valores que são armazenados em
um vetor. Encontre após o menor valor informado e o mostre, bem como o
número de vezes que esse valor apareceu no vetor. 
*/

#define length 10

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[length];
		int menor = 0, cont = 0;
		
		printf("Digite 10 valores: \n");
		for (int i = 0; i < length; i++) {
			printf("%i° Valor: ", i+1);
			scanf("%i", &x[i]);
			
			if (i == 0 || x[i] < menor) {
				menor = x[i];
				cont = 1;
			} else if (x[i] == menor) {
				cont++;
			}
		}
		
		printf("\nO menor valor digitado foi %i\nEle foi digitado %i vezes\n", menor, cont);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

