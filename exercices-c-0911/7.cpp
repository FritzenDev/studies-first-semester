#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		int num, calc1, calc2;
	
		printf("Escreva seu n�mero: ");
		scanf("%i", &num);
		
		calc1 = num - 1;
		calc2 = num + 1;
		
		printf("O antecessor de %i �: %i\nO sucessor de %i �: %i\n", num, calc1, num, calc2);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


