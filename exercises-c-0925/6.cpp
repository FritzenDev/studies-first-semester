#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa em C que leia o dia e o m�s de nascimento de uma pessoa e o
seu nome, ap�s escreva o Nome e o signo dela de acordo com a tabela abaixo (a
tabela n�o ser� exibida):
Nascidos entre: Signo:
20/03 a 20/04 �ries
21/04 a 20/05 Touro
21/05 a 20/06 G�meos
21/06 a 21/07 C�ncer
22/07 a 22/08 Le�o
23/08 a 22/09 Virgem
23/09 a 22/10 Libra
23/10 a 21/11 Escorpi�o
22/11 a 21/12 Sagit�rio
22/12 a 20/01 Capric�rnio
21/01 a 18/02 Aqu�rio
19/02 a 19/03 Peixes
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int dia, mes;
		char name;
		
		printf("Digite o seu nome: ");
		scanf("%s", &name);
		
		do {
			printf("Digite o m�s em que voc� nasceu: ");
			scanf("%i", &mes);	
		} while (mes < 1 || mes > 12);
		
		do {
			printf("Digite o dia em que voc� nasceu: ");
			scanf("%i", &dia);
			
			if (mes == 2 && dia > 28) {
				printf("Recomece e digite um dia v�lido\n");
			}
			
			if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
				printf("Recomece e digite um dia v�lido\n");
			}
			
		} while (dia < 1 || dia > 31);
		
		switch (mes) {
			case 1:
				if (dia <= 20)
					printf("Signo: Capric�rnio\n");
				else
					printf("Signo: Aqu�rio\n");
				break;
			case 2:
				if (dia <= 19)
					printf("Signo: Aqu�rio\n");
				else
					printf("Signo: Peixes\n");
				break;
			case 3:
				if (dia <= 20)
					printf("Signo: Peixes\n");
				else
					printf("Signo: �ries\n");
				break;
			case 4:
				if (dia <= 20)
					printf("Signo: �ries\n");
				else
					printf("Signo: Touro\n");
				break;
			case 5:
				if (dia <= 20)
					printf("Signo: Touro\n");
				else
					printf("Signo: G�meos\n");
				break;
			case 6:
				if (dia <= 20)
					printf("Signo: G�meos\n");
				else
					printf("Signo: C�ncer\n");
				break;
			case 7:
				if (dia <= 21)
					printf("Signo: C�ncer\n");
				else
					printf("Signo: Le�o\n");
				break;
			case 8:
				if (dia <= 22)
					printf("Signo: Le�o\n");
				else
					printf("Signo: Virgem\n");
				break;
			case 9:
				if (dia <= 22)
					printf("Signo: Virgem\n");
				else
					printf("Signo: Libra\n");
				break;
			case 10:
				if (dia <= 22)
					printf("Signo: Libra\n");
				else
					printf("Signo: Escorpi�o\n");
				break;
			case 11:
				if (dia <= 21)
					printf("Signo: Escorpi�o\n");
				else
					printf("Signo: Sagit�rio\n");
				break;
			case 12:
				if (dia <= 21)
					printf("Signo: Sagit�rio\n");
				else
					printf("Signo: Capric�rnio\n");
				break;
			default:
				printf("Informa��es incorretas");
			break;
		}
		
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


