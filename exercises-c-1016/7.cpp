#include <stdio.h>
#include <locale.h>

/*
Em uma empresa, existiam dois funcionários: o Mario que ganhava 1500,00
por mês, e o Rodrigo que ganhava 1100,00 por mês. A empresa apresentou
um plano para que o Rodrigo pudesse ganhar mais que o Mario.
Considerando que a empresa daria um aumento de 10% ao ano para o
Mario e 20% para o Rodrigo, quantos anos levaria para que Rodrigo
ultrapassasse o salário do Mário ?
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m = 1500, r = 1100;
		int cont;
		
		while (r <= m) {
			m *= 1.10;
			r *= 1.20;
			cont++;
		}
		
		printf("Levará %i anos para Rodrigo ultrapassar o salário de Mario", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


