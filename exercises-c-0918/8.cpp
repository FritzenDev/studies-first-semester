#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia três notas de um aluno. Calcule a média
aritmética das notas. Após, escreva na tela se foi aprovado ou
reprovado, caso atinja média igual ou maior a sete.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float not1, not2, not3, calc;
	
		printf("Digite as três notas do aluno: ");
		scanf("%f%f%f", &not1, &not2, &not3);
		
		calc = (not1 + not2 + not3) / 3;
		
		if (calc >= 7) {
			printf("O aluno foi aprovado com uma média de %.1f\n", calc);	
		}
		else {
			printf("O aluno foi reprovado com uma média de %.1f\n", calc);
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


