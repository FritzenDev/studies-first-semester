#include <stdio.h>
#include <locale.h>

/*
Um posto está vendendo combustíveis com a seguinte tabela de
descontos: - Álcool: até 20 litros, desconto de 3% por litro - acima de
20 litros, desconto de 5% por litro - Gasolina: até 20 litros, desconto de
4% por litro - acima de 20 litros, desconto de 6% por litro Faça um
algoritmo que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: A - álcool, G - gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o preço do
litro da gasolina é R$ 6,50 o preço do litro do álcool é R$6,00.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float L, calc1, calc2, calc3, calc4;
		const float gP = 6.50, aP = 6.00;
		char tipo;
		
		printf("Digite a quantidade de litros: ");
        scanf("%f", &L);

        printf("Digite o tipo de combustível (A = Álcool, G = Gasolina): ");
        scanf(" %c", &tipo);
        
        //3% de desconto gasolina
        calc1 = L * aP * 0.97;
        
        //5% de desconto gasolina
        calc2 = L * aP * 0.95;
        
        //4% de desconto álcool
        calc3 = L * gP * 0.96;
        
        //6% de desconto álcool
        calc4 = L * gP * 0.94;
        
        //Gasolina
		if (tipo == 'A' || tipo == 'a') {
			if (L <= 20) {
				printf("O valor final com 3%% de desconto será de: R$ %.2f\n", calc1);
			} else {
                printf("O valor final com 5%% de desconto será de: R$ %.2f\n", calc2);
            }
		}
		else if (tipo == 'G' || tipo == 'g') {
            if (L <= 20) {
                printf("O valor final com 4%% de desconto será de: R$ %.2f\n", calc3);
            } else {
                printf("O valor final com 6%% de desconto será de: R$ %.2f\n", calc4);
            }
        } else {
            printf("Tipo de combustível inválido.\n");
        }
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}
