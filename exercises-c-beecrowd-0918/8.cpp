#include <stdio.h>

/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, 
bem como o valor de reajuste ganho e o índice reajustado, em percentual.
*/

int main() {

    char continuar;

    do {
    	float sal, calc, ganho;
    	
    	scanf("%f", &sal);
    	
    	if (sal > 0 && sal <= 400.00) {
    		ganho = sal * 0.15;
    		calc = sal + ganho;
    		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", calc, ganho);
		}
		if (sal >= 400.01 && sal <= 800.00) {
    		ganho = sal * 0.12;
    		calc = sal + ganho;
    		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", calc, ganho);
		}
		if (sal >= 800.01 && sal <= 1200.00) {
    		ganho = sal * 0.10;
    		calc = sal + ganho;
    		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", calc, ganho);
		}
		if (sal >= 1200.01 && sal <= 2000.00) {
    		ganho = sal * 0.07;
    		calc = sal + ganho;
    		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", calc, ganho);
		}
		if (sal > 2000.00) {
    		ganho = sal * 0.04;
    		calc = sal + ganho;
    		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", calc, ganho);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
