#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que imprima na tela os n�meros de 1 a 20, um
abaixo do outro. Depois modifique o programa para que ele mostre os
n�meros um ao lado do outro. (usando WHILE). 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int num = 1;
		
		while (num <= 20) {
			printf("%i ", num);
			num++;
		}
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

