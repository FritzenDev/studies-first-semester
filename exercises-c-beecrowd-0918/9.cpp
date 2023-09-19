#include <stdio.h>

/*
Leia 3 valores inteiros e ordene-os em ordem crescente. 
No final, mostre os valores em ordem crescente, uma linha em 
branco e em seguida, os valores na sequência como foram lidos.
*/

int main() {

    char continuar;

    do {
    	int a, b, c;
    	
    	scanf("%i%i%i", &a, &b, &c);

    	int ordenados[3];

    	if (a <= b && a <= c) {
        ordenados[0] = a;
        if (b <= c) {
            ordenados[1] = b;
            ordenados[2] = c;
        } else {
            ordenados[1] = c;
            ordenados[2] = b;
        }
    	} else if (b <= a && b <= c) {
        ordenados[0] = b;
        if (a <= c) {
            ordenados[1] = a;
            ordenados[2] = c;
        } else {
            ordenados[1] = c;
            ordenados[2] = a;
        }
    	} else {
        ordenados[0] = c;
        if (a <= b) {
            ordenados[1] = a;
            ordenados[2] = b;
        } else {
            ordenados[1] = b;
            ordenados[2] = a;
        }
    	}

    	printf("%d\n%d\n%d\n\n", ordenados[0], ordenados[1], ordenados[2]);

    	printf("%d\n%d\n%d\n", a, b, c);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
