#include <stdio.h>
#include <locale.h>

/*
Altere o programa anterior permitindo ao usuário informar as populações
e as taxas de crescimento iniciais. Valide a entrada e permita repetir a
operação. 
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
    	
    	printf("Digite a população do país A: ");
    	scanf("%i", &PA);
    	
    	if (PA <= 0) {
            printf("A população inicial do país A deve ser maior que zero. Tente novamente.\n");
            
        }
    	
    	printf("Digite a taxa de crescimento do país A: ");
    	scanf("%lf", &TA);
    	
    	if (TA <= 0) {
            printf("A taxa de crescimento do país A deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	printf("Digite a população do país B: ");
    	scanf("%i", &PB);
    	
    	if (PB <= 0) {
            printf("A população inicial do país B deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	printf("Digite a taxa de crescimento do país B: ");
    	scanf("%lf", &TB);
    	
    	if (TB <= 0) {
            printf("A taxa de crescimento do país B deve ser maior que zero. Tente novamente.\n");
            continue;
        }
    	
    	while (PA < PB) {
    		PA += PA * (TA / 100);
    		PB += PB * (TB / 100);
    		anos++;
		}
		
		printf("Levará %i anos para que a população do país A ultrapasse a população do país B.\n", anos);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

