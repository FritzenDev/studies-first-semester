#include <stdio.h>

/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina 
e precisa de sua ajuda para organizar os experimentos de um laboratório o 
qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram 
utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. 
Para obter estas informações, ela sabe exatamente o número de experimentos que foram 
realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada 
experimento.
*/

int main() {

    char continuar;

    do {
    	int N, Quantia, total = 0, totalC = 0, totalR = 0, totalS = 0;
    	char Tipo;
    
    	scanf("%i", &N);
    
    	for (int i = 0; i < N; i++) {
        	scanf("%i %c", &Quantia, &Tipo);
        
        	total += Quantia; // Atualiza o total de cobaias
        
        	if (Tipo == 'C') {
            	totalC += Quantia; // Atualiza o total de coelhos
        	} else if (Tipo == 'R') {
            	totalR += Quantia; // Atualiza o total de ratos
        	} else if (Tipo == 'S') {
            	totalS += Quantia; // Atualiza o total de sapos
        	}
    	}
    
    	printf("Total: %i cobaias\n", total);
    	printf("Total de coelhos: %i\n", totalC);
    	printf("Total de ratos: %i\n", totalR);
    	printf("Total de sapos: %i\n", totalS);
    	printf("Percentual de coelhos: %.2lf %%\n", (double)totalC / total * 100);
    	printf("Percentual de ratos: %.2lf %%\n", (double)totalR / total * 100);
    	printf("Percentual de sapos: %.2lf %%\n", (double)totalS / total * 100);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

