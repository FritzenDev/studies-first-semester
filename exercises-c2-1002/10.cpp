#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que pede ao usuários números até que seja
digitado um valor negativo, ao final do programa mostre os seguintes
resultados:
a) o maior valor x
b) o menor valor x 
c) a soma dos valores pares x
d) a média dos valores ímpares x
e) quantos números maiores a 50
f) a percentagem de valores maiores que 20
g) a média dos valores pares que estão entre 50 e 150
h) o total de valores digitados 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int num; //número a ser digitado
        int cont = 0; //contador de números
        int somap = 0; //somar os pares
        int impar = 0; //somar os impares
        int contI = 0; //contar os impares
        int maior = 0; //descobrir o maior
        int menor = 0; //descobrir o menor
        int cont50 = 0; //contar acima do 50
        int cont20 = 0; //contar acima do 20
        int cont150 = 0; //contar entre 50 e 150
        double p20 = 0; //porcentagem de 20
        int mediaP = 0; //media dos pares
        
        //entrada mãe
        printf("Digite um número (digite um número negativo para sair): ");
        scanf("%i", &num);


		//definir valor para o menor e maior
        if (num >= 0) {
            maior = num;
            menor = num;
        }

		//enquanto for positivo, repetir as exigências abaixo
        while (num >= 0) {
        	
        	//contador de números
            cont++;


			//descobrir o maior
            if (num > maior) {
                maior = num;
            }
			//descobrir o menor
            if (num < menor) {
                menor = num;
            }
			//somar os pares
            if (num % 2 == 0) {
                somap += num;
            }
			//contar e somar os impares
            if (num % 2 != 0) {
                contI++;
                impar += num;
            }
			//contar números acima do 50
            if (num > 50) {
                cont50++;
            }
			//contar números acima do 20
            if (num > 20) {
                cont20++;
            }
			//tirar a média dos pares acima de 150
            if (num >= 50 && num <= 150 && num % 2 == 0) {
                cont150++;
                mediaP += num;
            }
			//entrada pai
            printf("Digite um número (digite um número negativo para sair): ");
            scanf("%i", &num);
        }
		//porcentagem de números acima do 20
        if (contI > 0) {
            p20 = (cont20 * 100.0) / cont;
        }
		//porcentagem de pares de 50 até 150
        if (cont150 > 0) {
            mediaP = mediaP / cont150;
        }

		//saída
        printf("Maior: %i\n", maior);
        printf("Menor: %i ou %i\n", menor, num);
        printf("Soma dos valores pares: %i\n", somap);
        printf("A média dos valores ímpares é: %.2lf\n", (double)impar / contI);
        printf("Foi digitado %i números maiores que 50\n", cont50);
        printf("Porcentagem de valores maiores que 20: %.2lf%%\n", p20);
        printf("A média dos valores pares entre 50 e 150 é: %i\n", mediaP);
        printf("Foi digitado %i números\n\n", cont);
    	
		printf("Deseja continuar? Digite S se sim: ");
    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

