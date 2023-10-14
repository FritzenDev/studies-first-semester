#include <stdio.h>

/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
*/

int main() {

    char continuar;

    do {
    	int x, y, calc = 0;
    	
    	scanf("%i%i", &x, &y);
    	
    	if (x > y) {
    		int temp = x;
    		x = y;
    		y = temp;
		}
		
		for (int i = x + 1; i < y; i++) {
			if (i % 2 != 0) {
				calc += i;
			}
		}
		
		printf("%i\n", calc);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

