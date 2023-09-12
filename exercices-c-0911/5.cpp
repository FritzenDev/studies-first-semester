#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	char continuar;
	
	do {
	
		int a, b;
		float calc1, calc2, calc, div;
		
		printf("Digite o primeiro valor: ");
		scanf("%i", &a);
		
		printf("Digite o segundo valor: ");
		scanf("%i", &b);
		
		calc1 = pow(a, 2);
		calc2 = pow(b, 2);
		calc = calc1 + calc2;
		div = calc1 / calc2;
		
		printf("A soma dos quadrados dos valores é: %.f\nA divisão dos dois valores é: %.2f", calc, div);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


