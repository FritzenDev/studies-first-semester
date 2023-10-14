#include <stdio.h>

/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
*/

int main() {

    char continuar;

    do {
    	int num;
    	
    	scanf("%i", &num);
    	
    	for (int i = 0; i < 6; i++) {
    		if (num % 2 != 0) {
    			printf("%i\n", num);
			} else {
				num++;
				printf("%i\n", num);
			}
			num += 2;
			
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

