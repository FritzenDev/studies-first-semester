#include <stdio.h>

/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
*/

int main() {

    char continuar;

    do {
    	int n;
    	int maior = 0;
    	int position = 0;
    	
    	for (int i = 0; i < 100; i++) {
    		scanf("%i", &n);
    		
    		if (n > maior) {
    			maior = n;
    			position = i + 1;
			}
		}
		
		printf("%i\n", maior);
		printf("%i\n", position);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

