#include <stdio.h>
#include <locale.h>

/*
Para doar sangue � necess�rio ter entre 18 e 67 anos, pesar mais de
50kg e estar em jejum. Fa�a um programa que pergunta para 10
usu�rios a idade, peso do usu�rio e se ele est� em jejum, diga se o
usu�rio pode doar sangue ou n�o. No final, indica quantos usu�rios s�o
doadores e quantos n�o s�o. (usando DO WHILE). 
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
    		
    		printf("Voc� est� em jejum? 1 - Sim | 2 - N�o: ");
    		scanf("%i", &op);
    		
    		if ((idd >= 18 && idd <= 67) && kg > 50 && op == 1) {
    			printf("Est� apto para doa��o de sangue!\n\n");
    			cont1++;
			} else {
				printf("N�o est� apto para doa��o de sangue!\n\n");
				cont2++;
			}
			}
		} while (i < 10);
		
		printf("%i Est�o aptos e %i N�o est�o aptos\n", cont1, cont2);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

