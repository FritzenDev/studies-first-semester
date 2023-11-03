#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 valores de um vetor e apresenta a m�dia
aritm�tica desses valores. 
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
    		printf("%i� Valor: ", i+1);
    		scanf("%i", &x[i]);
    		soma += x[i];
		}
		
		float media = (float)soma / length;
		printf("\nA m�dia aritm�tica dos valores �: %.2f\n", media);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

