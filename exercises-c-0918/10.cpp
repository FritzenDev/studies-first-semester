#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia dois valores inteiros A e B se os valores
forem iguais dever� se somar os dois, caso contr�rio multiplique A por
B. Ao final de qualquer um dos c�lculos deve-se atribuir o resultado
para uma vari�vel C e mostrar seu conte�do na tela
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int a, b, c, calc1, calc2;
		
		printf("Digite o primeiro n�mero: ");
		scanf("%i", &a);
		
		printf("Digite o segundo n�mero: ");
		scanf("%i", &b);
		
		calc1 = a + b;
		calc2 = a * b;
		
		if (a == b) {
			printf("Os n�meros (%i e %i) s�o iguais, portanto soma-se, ficando: %i\n", a, b, calc1);
		}
		else {
			printf("Os n�meros (%i e %i) s�o diferentes, portanto multiplica-se, ficando: %i\n", a, b, calc2);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


