#include <stdio.h>
#include <locale.h>

/*
Josefina deseja saber se o saldo de sua conta no banco e suficiente
para pagar a d�vida do armaz�m. Fa�a um programa para ler o saldo
de sua conta no banco, o valor de sua d�vida e imprima a mensagem
mais adequada conforme o caso: - a d�vida n�o pode ser paga - saldo
suficiente para pagar at� o dia 10 - saldo suficiente para pagar at� o
dia 20 - saldo suficiente para pagar em qualquer dia. Al�m disso, para
imprimir as mensagens deve-se levar em conta o seguinte: - se a d�vida
for paga at� o dia 10 (inclusive) n�o sofrera acr�scimo. - se a d�vida for
paga ap�s o dia 10 (mas at� o dia 20) recebera um acr�scimo de 3%. -
se a d�vida for paga ap�s o dia 20 recebera um acr�scimo de 5%.
Exemplo de c�lculo: Se Josefina possui R$310,00 de saldo e sua d�vida
for de R$300,00 dever� ser impressa a mensagem: �Saldo suficiente
para pagar at� o dia 20�, pois o saldo s� e suficiente para pagar um
acr�scimo de at� 3% (R$ 309,00), j� que se for atribu�do um acr�scimo
de 5% a d�vida passara a R$315,00.
Exemplos de dados de entrada e suas respectivas sa�das:
Entrada: 250 (saldo) 300 (valor)
Sa�da: A d�vida n�o pode ser paga
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	float saldo, divida;
    	
    	printf("Digite o saldo de Josefina: ");
    	scanf("%f", &saldo);
    	
    	printf("Digite a d�vida: ");
    	scanf("%f", &divida);
    	
    	if (saldo < divida) {
            printf("A d�vida n�o pode ser paga.\n");
        } else if (saldo >= divida && saldo < divida * 1.03) {
            printf("Saldo suficiente para pagar at� o dia 10.\n");
        } else if (saldo >= divida && saldo < divida * 1.05) {
            printf("Saldo suficiente para pagar at� o dia 20.\n");
        } else {
            printf("Saldo suficiente para pagar em qualquer dia.\n");
        }

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


