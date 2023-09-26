#include <stdio.h>
#include <locale.h>

/*
Ler e calcular o dobro de um n�mero, caso ele seja positivo e o seu triplo seja
negativo, imprima o resultado.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num, dob, trip;
		
		printf("Digite seu n�mero: ");
		scanf("%i", &num);
		
		dob = num * 2;
		trip = num * 3;
		
		if (dob > 0 && trip < 0) {
			printf("O dobro de %i �: %i\nO triplo de %i �: %i\n", num, dob, num, trip);
		} else {
			printf("O dobro de %i �: %i\n", num, dob);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


