#include <stdio.h>
#include <locale.h>

/*
Faça um programa que preenche um vetor A de 10 elementos com o valor 30.
Após o preenchimento mostre o vetor A. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int A[10];
		int i;
		
		for (i = 0; i < 10; i++) {
			A[i] = 30;
		}
		
		for (i = 0; i < 10; i++) {
			printf("%i (%i°)\n", A[i], i+1);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


