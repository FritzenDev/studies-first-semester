#include <stdio.h>
#include <locale.h>

/*
Faça um programa para ler a idade de 5 alunos e mostrar um
mensagem ao final de acordo com as instruções: - se a média de idade
dos alunos for inferior de 25, apresentar a mensagem "Turma Jovem"
e a idade de cada aluno; - se a média de idade dos alunos está entre
25 e 40, apresentar a mensagem "Turma Adulta" e a média das idades;
- se a média de idade dos alunos está acima de 40 anos, apresentar a
mensagem "Turma Idosa", mostrar a média das idades e a idade de
cada aluno.
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	float idd1, idd2, idd3, idd4, idd5, media;
    	
    	printf("Digite as 5 idades: ");
    	scanf("%f%f%f%f%f", &idd1, &idd2, &idd3, &idd4, &idd5);
    	
    	media = (idd1 + idd2 + idd3 + idd4 + idd5) / 5;
    	
    	if (media < 25) {
    		printf("Turma Jovem\nAluno 1: %.f\nAluno 2: %.f\nAluno 3: %.f\nAluno 4: %.f\nAluno 5: %.f\n", idd1, idd2, idd3, idd4, idd5);
		}
		if (media >= 25 && media <= 40) {
    		printf("Turma Adulta\nMedia de idade: %.f\n", media);
		}
		if (media > 40) {
    		printf("Turma Idosa\nAluno 1: %.f\nAluno 2: %.f\nAluno 3: %.f\nAluno 4: %.f\nAluno 5: %.f\nMedia de idade: %.f\n", idd1, idd2, idd3, idd4, idd5, media);
		}
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


