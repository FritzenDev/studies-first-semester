#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia a nota final de 5 alunos. Escreva no final, a
maior e a menor nota, a m�dia das notas e a quantidade de notas acima da
m�dia. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float nota[5], maior = 0, menor = 10;
		int cont = 0;
		float media, somaN = 0; 
		
		for (int i = 0; i < 5; i++) {
			printf("Digite a nota do aluno %i: ", i+1);
			scanf("%f", &nota[i]);
			
			somaN += nota[i];
			
			if (nota[i] > maior) {
				maior = nota[i];
			}
			
			if (nota[i] < menor) {
				menor = nota[i];
			}
			
			if (nota[i] > 6) {
				cont++;
			}
		}
		
		media = somaN / 5;
		
		printf("Maior nota: %.f\nMenor nota: %.f\n", maior, menor);
		printf("M�dia das notas: %.2f\n", media);
		printf("Teve um total de %i notas acima da m�dia\n", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


