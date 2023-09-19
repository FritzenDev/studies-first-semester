#include <stdio.h>
#include <locale.h>

/*
Um radar de tr�nsito faz a medi��o de velocidade dos ve�culos e,
dependendo da velocidade, calcula a multa a ser aplicada. Em uma
determinada via, esse radar foi configurado da seguinte forma: - se a
velocidade for maior que 80km/h, a multa � de R$360,00 - se a
velocidade for maior que 60km/h, a multa � de R$180,00 - se a
velocidade for menor ou igual a 60km/h, n�o h� multa
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float vel;
		
		printf("A velocidade captada foi de: ");
		scanf("%f", &vel);
		
		if (vel > 80) {
			printf("A multa aplicada ser� de R$360,00\n");
		}
		if (vel > 60 && vel < 80) {
			printf("A multa aplicada ser� de R$180,00\n");
		}
		if (vel <= 60) {
			printf("N�o h� multa a ser aplicada\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


