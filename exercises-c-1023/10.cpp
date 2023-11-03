#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 7 valores e armazena no vetor X. Ao final, mostre
quantos valores pares, quantos valores ímpares e quantos negativos foram
digitados. 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[7];
    	int contI = 0, contP = 0, contN = 0;
    	
    	for (int i = 0; i < 7; i++) {
    		printf("Digite o %i° valor: ", i+1);
    		scanf("%i", &x[i]);
    		
    		if (x[i] % 2 == 0) {
    			contP++;
			}
			
			if (x[i] % 2 != 0) {
    			contI++;
			}
			
			if (x[i] < 0) {
    			contN++;
			}
		}
		
		printf("\nForam digitados %i valores pares\n", contP);
		printf("Foram digitados %i valores ímpares\n", contI);
		printf("Foram digitados %i valores negativos\n", contN);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

