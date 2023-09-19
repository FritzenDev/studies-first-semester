#include <stdio.h>

/*
Timelimit: 1
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem 
"Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
*/

int main() {

    char continuar;

    do {
    	int a, b;
    	
    	scanf("%i%i", &a, &b);
    	
    	if (b % a == 0 || a % b == 0) {
    		printf("Sao Multiplos\n");
		} else {
			printf("Nao sao Multiplos\n");
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
