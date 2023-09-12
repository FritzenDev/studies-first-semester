#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		int num, calc1, calc2;
	
		printf("Escreva seu número: ");
		scanf("%i", &num);
		
		calc1 = num - 1;
		calc2 = num + 1;
		
		printf("O antecessor de %i é: %i\nO sucessor de %i é: %i\n", num, calc1, num, calc2);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


