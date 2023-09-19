#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia o salário de uma pessoa e imprime o
desconto do INSS segundo os critérios: a) <= R$600 = isento b) > R$601
e <= R$1200 = 20% c) > R$1201 e <= R$2000 = 25% d) > R$2001 = 30%
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float sal, d20, calc1, d25, calc2, d30, calc3;
		
		printf("Digite o salário: ");
		scanf("%f", &sal);
		
		d20 = sal * 0.20;
		calc1 = sal - d20;
		
		d25 = sal * 0.25;
		calc2 = sal - d25;
		
		d30 = sal * 0.30;
		calc3 = sal - d30;
		
		if (sal <= 600) {
			printf("Isento\n");
		}
		if (sal >= 601 && sal <= 1200) {
			printf("O salário sobre desconto do INSS será de %.2f\n", calc1);
		}
		if (sal >= 1201 && sal <= 2000) {
			printf("O salário sobre desconto do INSS será de %.2f\n", calc2);
		}
		if (sal >= 2001) {
			printf("O salário sobre desconto do INSS será de %.2f\n", calc3);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


