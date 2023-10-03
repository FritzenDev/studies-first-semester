#include <stdio.h>
#include <locale.h>

/*
Supondo que a popula��o de um pa�s A seja da ordem de 80000
habitantes com uma taxa anual de crescimento de 3% e que a
popula��o de B seja 200000 habitantes com uma taxa de crescimento
de 1.5%. Fa�a um programa que calcule e escreva o n�mero de anos
necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a
popula��o do pa�s B, mantidas as taxas de crescimento. 
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
		
		printf("Levar� %i anos para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B.\n", anos);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

