#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que l� um n�mero e verificar se ele � par ou �
�mpar. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		printf("Digite seu n�mero: ");
		scanf("%i", &num);
		
		if (num 2==0) {
			printf("%i � par\n", num);
		}
		else {
			printf("%i � impar\n", num);
		} 
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


