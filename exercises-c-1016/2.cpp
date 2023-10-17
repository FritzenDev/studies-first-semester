#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia as notas de 10 alunos e no final escreva a maior
e a menor nota, assim como a média dos alunos com nota maior que 6 e
dos alunos menores que 6
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float nota[10], maior = 0, menor = 10, somaMa = 0, somaMe = 0;
		int contMa = 0, contMe = 0; 
		
		for (int i = 0; i < 10; i++) {
			printf("Digite a nota do aluno %i: ", i+1);
			scanf("%f", &nota[i]);
			
			if (nota[i] > maior) {
				maior = nota[i];
			}
			
			if (nota[i] < menor) {
				menor = nota[i];
			}
			
			if (nota[i] > 6) {
				somaMa += nota[i];
				contMa++;
			} else {
				somaMe += nota[i];
				contMe++;
			}
		}
			
		
		printf("Maior nota: %.f\n", maior);
		printf("Menor nota: %.f\n", menor);
		printf("Média de alunos com nota acima de 6: %.2f\n", somaMa/contMa);
		printf("Média de alunos com nota abaixo de 6: %.2f\n", somaMe/contMe);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


