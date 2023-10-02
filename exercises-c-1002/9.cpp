#include <stdio.h>
#include <locale.h>

/*
Faça um programa que calcula a tabuada de um número lido.
Exemplo: [Entrada] 5
1 x 5 = 5
2 x 5 = 10
3 x 5 = 15
4 x 5 = 20
5 x 5 = 25
6 x 5 = 30
7 x 5 = 35
8 x 5 = 40
9 x 5 = 45
10 x 5 = 50
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int numB, num, calc;
		
		printf("Digite o número da tabuada: ");
		scanf("%i", &numB);
		
		for (num = 1; num <= 10; num++) {
			calc = numB * num;
			printf("%i x %i = %i\n", num, numB, calc);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


