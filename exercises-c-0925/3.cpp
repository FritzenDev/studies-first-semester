#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso
sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		char name[50], gen[2], ec[10];
		int temp;
		
		printf("Digite o seu nome: ");
		scanf("%s", &name);
		
		printf("Digite o seu gênero (H - Homem | M - Mulher): ");
		scanf(" %c", &gen);
		
		printf("Digite o seu estado cívil (SOLTEIRO(A) | CASADO(A)): ");
		scanf("%s", &ec);
		
		if (gen[0] == 'M' && strcmp(ec,"CASADA") == 0) {
			printf("Digite seu tempo de casada: ");
			scanf("%i", &temp);
			printf("\nVocê se chama: %s\nSeu gênero é: %c\nVocê está: %s\nSeu tempo de casada é: %i\n", name, gen[0], ec, temp);
		} else {
			printf("\nVocê se chama: %s\nSeu gênero é: %c\nVocê está: %s\n", name, gen[0], ec);
		}

		
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


