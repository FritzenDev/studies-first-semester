#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que pede ao usu�rios n�meros at� que seja
digitado um valor negativo, ao final do programa mostre os seguintes
resultados:
a) o maior valor x
b) o menor valor x 
c) a soma dos valores pares x
d) a m�dia dos valores �mpares x
e) quantos n�meros maiores a 50
f) a percentagem de valores maiores que 20
g) a m�dia dos valores pares que est�o entre 50 e 150
h) o total de valores digitados 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int num; //n�mero a ser digitado
        int cont = 0; //contador de n�meros
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
        
        //entrada m�e
        printf("Digite um n�mero (digite um n�mero negativo para sair): ");
        scanf("%i", &num);


		//definir valor para o menor e maior
        if (num >= 0) {
            maior = num;
            menor = num;
        }

		//enquanto for positivo, repetir as exig�ncias abaixo
        while (num >= 0) {
        	
        	//contador de n�meros
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
			//contar n�meros acima do 50
            if (num > 50) {
                cont50++;
            }
			//contar n�meros acima do 20
            if (num > 20) {
                cont20++;
            }
			//tirar a m�dia dos pares acima de 150
            if (num >= 50 && num <= 150 && num % 2 == 0) {
                cont150++;
                mediaP += num;
            }
			//entrada pai
            printf("Digite um n�mero (digite um n�mero negativo para sair): ");
            scanf("%i", &num);
        }
		//porcentagem de n�meros acima do 20
        if (contI > 0) {
            p20 = (cont20 * 100.0) / cont;
        }
		//porcentagem de pares de 50 at� 150
        if (cont150 > 0) {
            mediaP = mediaP / cont150;
        }

		//sa�da
        printf("Maior: %i\n", maior);
        printf("Menor: %i ou %i\n", menor, num);
        printf("Soma dos valores pares: %i\n", somap);
        printf("A m�dia dos valores �mpares �: %.2lf\n", (double)impar / contI);
        printf("Foi digitado %i n�meros maiores que 50\n", cont50);
        printf("Porcentagem de valores maiores que 20: %.2lf%%\n", p20);
        printf("A m�dia dos valores pares entre 50 e 150 �: %i\n", mediaP);
        printf("Foi digitado %i n�meros\n\n", cont);
    	
		printf("Deseja continuar? Digite S se sim: ");
    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

