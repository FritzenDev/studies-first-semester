#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de
para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A
f�rmula � IMC = peso / ( altura ) � . Elabore um programa que leia o peso e a
altura de um adulto e mostre sua condi��o de acordo com a tabela abaixo:
? Abaixo de 18,5 -Abaixo do peso
? Entre 18,5 e 25 -Peso normal
? Entre 25 e 30 -Acima do peso
? Acima de 30 �obeso
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float peso, altura, imc;
		
		printf("Digite o seu peso: ");
		scanf("%f", &peso);
		
		printf("Digite a sua altura: ");
		scanf("%f", &altura);
		
		imc = peso / pow(altura,2);
		
		if (imc < 18.5) {
			printf("Abaixo do peso\n");
		}
		if (imc >= 18.5 && imc < 25) {
			printf("Peso normal\n");
		}
		if (imc >= 25 && imc < 30 ) {
			printf("Acima do peso\n");
		}
		if (imc >= 30) {
			printf("Obeso\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


