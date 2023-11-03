#include <stdio.h>
#include <locale.h>

/*
Leia um vetor A de 10 elementos e um valor "x". Conte e escreva quantas vezes
o valor "x" ocorre no vetor A. 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int a[10], x;
    	int cont = 0;
    	
    	printf("Digite o valor de X: ");
    	scanf("%i", &x);
    	
    	printf("\n");
    	
    	for (int i = 0; i < 10; i++) {
    		printf("Digite o %i° valor: ", i+1);
    		scanf("%i", &a[i]);
    		
    		if (a[i] == x) {
    			cont++;
			}
		}
		
		printf("\nX foi digitado %i vezes", cont);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

