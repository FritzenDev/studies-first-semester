#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia um n�mero e mostra se o n�mero �
maior que 20, menor que 20 ou igual a 20. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		printf("Digite seu n�mero: ");
		scanf("%i", &num);
		
		if (num > 20) {
			printf("%i � maior que 20\n", num);
		}
		if (num < 20) {
			printf("%i � menor que 20\n", num);
		}
		else {
			printf("O n�mero � 20\n", num);
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


