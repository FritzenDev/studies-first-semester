#include <stdio.h>

/*
Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 
Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), 
ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), 
embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá 
imprimir apenas NULL.
*/

int main() {

    char continuar;

    do {
    	int n, num, x;
    	
    	scanf("%i", &n);
    	
    	for (x = 0; x < n; x++) {
    		scanf("%i", &num);
    		
    		if (num % 2 == 0 && num > 0) {
    			printf("EVEN POSITIVE\n");
			}
			if (num % 2 == 0 && num < 0) {
				printf("EVEN NEGATIVE\n");
			}
			if (num % 2 != 0 && num > 0) {
    			printf("ODD POSITIVE\n");
			}
			if (num % 2 != 0 && num < 0) {
				printf("ODD NEGATIVE\n");
			}
			if (num == 0) {
				printf("NULL\n");
			}
    	}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

