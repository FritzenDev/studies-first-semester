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
		float L, d3, calc1, d5, calc2, d4, calc3, d6, calc4, calcF, calcF2;
		const float gP = 6.50, aP = 6.00;
		char tipo[1];
		
		printf("Digite a quantidade de litros: ");
		scanf("%f", &L);
		
		printf("Digite o tipo de combustível (A = Álcool) e (G = Gasolina): ");
		scanf("%c", &tipo);
		
		calcF = gP * L;
		calcF2 = aP * L; 
		
		d3 = calcF * 0.03;
		calc1 = calcF - d3;
		
		d5 = calcF * 0.05;
		calc2 = calcF - d5;
		
		d4 = calcF2 * 0.04;
		calc3 = calcF2 - d4;
		
		d6 = calcF2 * 0.06;
		calc4 = calcF2 - d6;
		
		if (tipo == "A" || tipo == "a") {
			if (L <= 20){
			printf("O valor final sobre um desconto de 3% será de: %.2f", calc1);
		    }
		}
		if (tipo == "A" || tipo == "a") {
			if (L > 20) {
			printf("O valor final sobre um desconto de 5% será de: %.2f", calc2);
		    }
		}
		if (tipo == "G" || tipo == "g") {
			if (L <= 20) {
			printf("O valor final sobre um desconto de 4% será de: %.2f", calc3);
			}
		}
		if (tipo == "G" || tipo == "g") {
			if (L > 20) {
			printf("O valor final sobre um desconto de 6% será de: %.2f", calc4);
			}
		}

		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


