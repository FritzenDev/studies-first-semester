#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Faça um programa que leia e valide as seguintes informações:
Nome: maior que 3 caracteres;
Idade: entre 0 e 150;
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd';
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	char name[100];
    	char gen, ec;
    	int idd;
    	float sal;
    	
    	do {
    		printf("Digite seu nome: ");
    		scanf("%s", &name);
    		
    		printf("Digite sua idade: ");
    		scanf("%i", &idd);
    		
    		printf("Digite seu salário: ");
    		scanf("%f", &sal);
    		
    		printf("Digite seu sexo (H ou M): ");
    		scanf(" %c", &gen);
    		
    		printf("Digite seu estado civil (Solteiro - S | Casado - C | Viúvo - V | Divorciado - D): ");
    		scanf(" %c", &ec);
    		
    		if (strlen(name) >= 3 && idd >= 0 && idd <= 150 && sal > 0 && (gen == 'H' || gen == 'M' || gen == 'h' || gen == 'm') && (ec == 'S' || ec == 's' || ec == 'C' || ec == 'c' || ec == 'V' || ec == 'v' || ec == 'D' || ec == 'd')) {
    			printf("Cadastro completado com sucesso!\n");
			} else {
				printf("Você digitou algum dado incorreto!\n");
			}   		
		} while (!(strlen(name) >= 3 && idd >= 0 && idd <= 150 && sal > 0 && (gen == 'H' || gen == 'M' || gen == 'h' || gen == 'm') && (ec == 'S' || ec == 's' || ec == 'C' || ec == 'c' || ec == 'V' || ec == 'v' || ec == 'D' || ec == 'd')));

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

