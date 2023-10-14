#include <stdio.h>

/*
Leia um conjunto não determinado de pares de valores M e N 
(parar quando algum dos valores for menor ou igual a zero). Para cada par lido, 
mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre 
eles (incluindo o N e M).
*/

int main() {

    char continuar;

    do {
    	int M, N;
    	
    	while (1) {
    		scanf("%i%i", &M, &N);
    		
    		if (M <= 0 || N <= 0) {
    			break;
			}
			
			int menor, maior;
			int soma = 0;
			
			if (M < N) {
				menor = M;
				maior = N;
			} else {
				menor = N;
				maior = M;
			}
			
			for (int i = menor; i <= maior; i++) {
				printf("%i ", i);
				soma += i;
			}
			
			printf("Sum=%i\n", soma);
			break;
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

