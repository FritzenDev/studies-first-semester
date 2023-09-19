#include <stdio.h>
#include <locale.h>

/*
João convidou seus amigos do Facebook para uma confraternização.
Ao receber a conta ele resolveu utilizar um algoritmo para calcular o
valor que ele e cada um de seus amigos irá pagar. Faça um programa
para ler o valor total da conta e a quantidade de amigos do João que
participaram da festa. Calcular e escrever o valor que João irá pagar
pela conta e o valor pago pelos seus amigos. O programa deve calcular
conforme as regras abaixo considere o valor total da conta: - abaixo de
R$300,00 João paga 80% da conta e divide o restante igualmente por
seus amigos; - R$300,00 até R$600,00 João paga a metade e divide o
restante igualmente por seus amigos; - acima de R$ 600,00 a conta e
dividida igualmente entre ele e seus amigos. 95. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float valorT, qntAmg, pag80, rest1, pag50, rest2, calc1, calc2, calc3;
		
		printf("Digite o valor total da conta: ");
		scanf("%f", &valorT);
		
		printf("Digite a quantidade de amigos: ");
		scanf("%f", &qntAmg);
		
		
		pag80 = valorT * 0.80;
		rest1 = valorT - pag80;
		pag50 = valorT / 2;
		rest2 = valorT - pag50;
		
		calc1 = rest1 / qntAmg;
		calc2 = rest2 / qntAmg;
		calc3 = valorT / (qntAmg + 1);
		
		if (valorT <= 300) {
			printf("João pagou %.2f e seu amigos pagaram %.2f\n", pag80, calc1);
		}
		if (valorT >= 300 && valorT <= 600) {
			printf("João pagou %.2f e seus amigos pagaram %.2f\n", pag50, calc2);
		}
		if (valorT >= 600) {
			printf("Todos pagaram %.2f\n", calc3);
		}
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


