#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia tr�s notas de um aluno. Calcule a m�dia
aritm�tica das notas. Ap�s, escreva na tela se foi aprovado ou
reprovado, caso atinja m�dia igual ou maior a sete.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float not1, not2, not3, calc;
	
		printf("Digite as tr�s notas do aluno: ");
		scanf("%f%f%f", &not1, &not2, &not3);
		
		calc = (not1 + not2 + not3) / 3;
		
		if (calc >= 7) {
			printf("O aluno foi aprovado com uma m�dia de %.1f\n", calc);	
		}
		else {
			printf("O aluno foi reprovado com uma m�dia de %.1f\n", calc);
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


