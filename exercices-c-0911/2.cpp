#include <stdio.h>
#include <locale.h>

int main () {

	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
		int A, B, C;
		
		printf("Escreva o valor de A: ");
		scanf("%i", &A);
		
		printf("Escreva o valor de B: ");
		scanf("%i", &B);
		
		C = A;
		A = B;
		B = C;
		
		printf("Agora o valor de A é: %i\nAgora o valor de B é: %i\n", A, B);
	
	   scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


