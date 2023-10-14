#include <stdio.h>

/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N
*/

int main() {

    char continuar;

    do {
    	int n, x = 0, calc;
    	
    	scanf("%i", &n);
    	
    	for (x = 1; x <= 10; x++) {
    		calc = x * n;
    		printf("%i x %i = %i\n", x, n, calc);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

