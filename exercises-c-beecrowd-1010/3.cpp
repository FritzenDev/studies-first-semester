#include <stdio.h>

/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
*/

int main() {

    char continuar;

    do {
    	int n, x, num, contIN = 0, contOUT = 0;
    	
    	scanf("%i", &n);
    	
    	for (x = 0; x < n; x++) {
    		scanf("%i", &num);
    		if (num >= 10 && num <= 20) {
    			contIN++;
			}
			if (num < 10 || num > 20) {
				contOUT++;
			}
		}
		printf("%i in\n%i out\n", contIN, contOUT);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

