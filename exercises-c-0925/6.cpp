#include <stdio.h>
#include <locale.h>

/*
Faça um programa em C que leia o dia e o mês de nascimento de uma pessoa e o
seu nome, após escreva o Nome e o signo dela de acordo com a tabela abaixo (a
tabela não será exibida):
Nascidos entre: Signo:
20/03 a 20/04 Áries
21/04 a 20/05 Touro
21/05 a 20/06 Gêmeos
21/06 a 21/07 Câncer
22/07 a 22/08 Leão
23/08 a 22/09 Virgem
23/09 a 22/10 Libra
23/10 a 21/11 Escorpião
22/11 a 21/12 Sagitário
22/12 a 20/01 Capricórnio
21/01 a 18/02 Aquário
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
			printf("Digite o mês em que você nasceu: ");
			scanf("%i", &mes);	
		} while (mes < 1 || mes > 12);
		
		do {
			printf("Digite o dia em que você nasceu: ");
			scanf("%i", &dia);
			
			if (mes == 2 && dia > 28) {
				printf("Recomece e digite um dia válido\n");
			}
			
			if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
				printf("Recomece e digite um dia válido\n");
			}
			
		} while (dia < 1 || dia > 31);
		
		switch (mes) {
			case 1:
				if (dia <= 20)
					printf("Signo: Capricórnio\n");
				else
					printf("Signo: Aquário\n");
				break;
			case 2:
				if (dia <= 19)
					printf("Signo: Aquário\n");
				else
					printf("Signo: Peixes\n");
				break;
			case 3:
				if (dia <= 20)
					printf("Signo: Peixes\n");
				else
					printf("Signo: Áries\n");
				break;
			case 4:
				if (dia <= 20)
					printf("Signo: Áries\n");
				else
					printf("Signo: Touro\n");
				break;
			case 5:
				if (dia <= 20)
					printf("Signo: Touro\n");
				else
					printf("Signo: Gêmeos\n");
				break;
			case 6:
				if (dia <= 20)
					printf("Signo: Gêmeos\n");
				else
					printf("Signo: Câncer\n");
				break;
			case 7:
				if (dia <= 21)
					printf("Signo: Câncer\n");
				else
					printf("Signo: Leão\n");
				break;
			case 8:
				if (dia <= 22)
					printf("Signo: Leão\n");
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
					printf("Signo: Escorpião\n");
				break;
			case 11:
				if (dia <= 21)
					printf("Signo: Escorpião\n");
				else
					printf("Signo: Sagitário\n");
				break;
			case 12:
				if (dia <= 21)
					printf("Signo: Sagitário\n");
				else
					printf("Signo: Capricórnio\n");
				break;
			default:
				printf("Informações incorretas");
			break;
		}
		
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


