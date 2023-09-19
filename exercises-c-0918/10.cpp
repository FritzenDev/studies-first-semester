#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia dois valores inteiros A e B se os valores
forem iguais deverá se somar os dois, caso contrário multiplique A por
B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado
para uma variável C e mostrar seu conteúdo na tela
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int a, b, c, calc1, calc2;
		
		printf("Digite o primeiro número: ");
		scanf("%i", &a);
		
		printf("Digite o segundo número: ");
		scanf("%i", &b);
		
		calc1 = a + b;
		calc2 = a * b;
		
		if (a == b) {
			printf("Os números (%i e %i) são iguais, portanto soma-se, ficando: %i\n", a, b, calc1);
		}
		else {
			printf("Os números (%i e %i) são diferentes, portanto multiplica-se, ficando: %i\n", a, b, calc2);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


