#include <stdio.h>
#include <locale.h>

/*
Altere o programa anterior permitindo ao usu�rio informar as popula��es
e as taxas de crescimento iniciais. Valide a entrada e permita repetir a
opera��o. 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int PA;
		int PB;
		int anos = 0;
    	double TA;
    	double TB;
    	
    	printf("Digite a popula��o do pa�s A: ");
    	scanf("%i", &PA);
    	
    	if (PA <= 0) {
            printf("A popula��o inicial do pa�s A deve ser maior que zero. Tente novamente.\n");
            
        }
    	
    	printf("Digite a taxa de crescimento do pa�s A: ");
    	scanf("%lf", &TA);
    	
    	if (TA <= 0) {
            printf("A taxa de crescimento do pa�s A deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	printf("Digite a popula��o do pa�s B: ");
    	scanf("%i", &PB);
    	
    	if (PB <= 0) {
            printf("A popula��o inicial do pa�s B deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	printf("Digite a taxa de crescimento do pa�s B: ");
    	scanf("%lf", &TB);
    	
    	if (TB <= 0) {
            printf("A taxa de crescimento do pa�s B deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	while (PA < PB) {
    		PA += PA * (TA / 100);
    		PB += PB * (TB / 100);
    		anos++;
		}
		
		printf("Levar� %i anos para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B.\n", anos);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

