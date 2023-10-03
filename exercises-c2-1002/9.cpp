#include <stdio.h>
#include <locale.h>

/*
Para doar sangue é necessário ter entre 18 e 67 anos, pesar mais de
50kg e estar em jejum. Faça um programa que pergunta para 10
usuários a idade, peso do usuário e se ele está em jejum, diga se o
usuário pode doar sangue ou não. No final, indica quantos usuários são
doadores e quantos não são. (usando DO WHILE). 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int idd, kg, op;
    	int i = 0;
    	int cont1 = 0, cont2 = 0;
    	
    	do {
    		for (i; i < 10; i++) {
    		printf("Digite sua idade: ");
    		scanf("%i", &idd);
    		
    		printf("Digite seu peso: ");
    		scanf("%i", &kg);
    		
    		printf("Você está em jejum? 1 - Sim | 2 - Não: ");
    		scanf("%i", &op);
    		
    		if ((idd >= 18 && idd <= 67) && kg > 50 && op == 1) {
    			printf("Está apto para doação de sangue!\n\n");
    			cont1++;
			} else {
				printf("Não está apto para doação de sangue!\n\n");
				cont2++;
			}
			}
		} while (i < 10);
		
		printf("%i Estão aptos e %i Não estão aptos\n", cont1, cont2);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

