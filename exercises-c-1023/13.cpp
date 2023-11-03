#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores de um vetor e apresenta a média
aritmética desses valores. 
*/

#define length 10

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int x[length];
    	int soma = 0;
    	
    	printf("Digite 10 valores: \n");
    	for (int i = 0; i < length; i++) {
    		printf("%i° Valor: ", i+1);
    		scanf("%i", &x[i]);
    		soma += x[i];
		}
		
		float media = (float)soma / length;
		printf("\nA média aritmética dos valores é: %.2f\n", media);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

