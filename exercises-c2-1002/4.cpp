#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Fa�a um programa que leia um nome de usu�rio e a sua senha e n�o
aceite a senha igual ao nome do usu�rio, mostrando uma mensagem de
erro e voltando a pedir as informa��es.
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	char name[100];
    	char pass[100];
    	
    	do {
    		printf("Digite seu nome de usu�rio: ");
    		scanf("%s", &name);
    		
    		printf("Digite sua senha: ");
    		scanf("%s", &pass);
    		
    		if (strcmp(pass, name) != 0) {
    			printf("Registrado com sucesso!\n");
			} else {
				printf("Senha inv�lida\n");
			}
		} while (strcmp(pass, name) == 0);
    	

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

