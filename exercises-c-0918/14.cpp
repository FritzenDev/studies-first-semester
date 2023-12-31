#include <stdio.h>
#include <locale.h>

/*
Um posto est� vendendo combust�veis com a seguinte tabela de
descontos: - �lcool: at� 20 litros, desconto de 3% por litro - acima de
20 litros, desconto de 5% por litro - Gasolina: at� 20 litros, desconto de
4% por litro - acima de 20 litros, desconto de 6% por litro Fa�a um
algoritmo que leia o n�mero de litros vendidos, o tipo de combust�vel
(codificado da seguinte forma: A - �lcool, G - gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do
litro da gasolina � R$ 6,50 o pre�o do litro do �lcool � R$6,00.
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

        printf("Digite o tipo de combust�vel (A = �lcool, G = Gasolina): ");
        scanf(" %c", &tipo);
        
        //3% de desconto gasolina
        calc1 = L * aP * 0.97;
        
        //5% de desconto gasolina
        calc2 = L * aP * 0.95;
        
        //4% de desconto �lcool
        calc3 = L * gP * 0.96;
        
        //6% de desconto �lcool
        calc4 = L * gP * 0.94;
        
        //Gasolina
		if (tipo == 'A' || tipo == 'a') {
			if (L <= 20) {
				printf("O valor final com 3%% de desconto ser� de: R$ %.2f\n", calc1);
			} else {
                printf("O valor final com 5%% de desconto ser� de: R$ %.2f\n", calc2);
            }
		}
		else if (tipo == 'G' || tipo == 'g') {
            if (L <= 20) {
                printf("O valor final com 4%% de desconto ser� de: R$ %.2f\n", calc3);
            } else {
                printf("O valor final com 6%% de desconto ser� de: R$ %.2f\n", calc4);
            }
        } else {
            printf("Tipo de combust�vel inv�lido.\n");
        }
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}



