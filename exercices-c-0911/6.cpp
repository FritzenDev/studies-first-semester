#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		int num, cont=0, calc;
		
		printf("Escreva seu número: ");
		scanf("%i", &num);

		
		for (cont=0; cont<=10; cont++) {
			calc = num * cont;
			printf("%i x %i = %i\n", num, cont, calc);
		}

	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


