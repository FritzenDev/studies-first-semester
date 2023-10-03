#include <stdio.h>
#include <locale.h>

/*
Supondo que a população de um país A seja da ordem de 80000
habitantes com uma taxa anual de crescimento de 3% e que a
população de B seja 200000 habitantes com uma taxa de crescimento
de 1.5%. Faça um programa que calcule e escreva o número de anos
necessários para que a população do país A ultrapasse ou iguale a
população do país B, mantidas as taxas de crescimento. 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int PA = 80000;
		int PB = 200000;
		int anos = 0;
    	double TA = 0.03;
    	double TB = 0.015;
    	
    	while (PA < PB) {
    		PA += PA * TA;
    		PB += PB * TB;
    		anos++;
		}
		
		printf("Levará %i anos para que a população do país A ultrapasse a população do país B.\n", anos);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

