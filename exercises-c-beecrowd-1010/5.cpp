#include <stdio.h>

/*
Leia um valor inteiro N. Apresente todos os 
números entre 1 e 10000 que divididos por N dão resto igual a 2.
*/

int main() {

    char continuar;

    do {
    	int n, x = 0;
    	
    	scanf("%i", &n);

		for (x = 0; x < 10000; x++) {
			if (x % n == 2) {
				printf("%i\n", x);
			}
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

