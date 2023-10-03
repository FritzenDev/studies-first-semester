#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Faça um programa que leia um nome de usuário e a sua senha e não
aceite a senha igual ao nome do usuário, mostrando uma mensagem de
erro e voltando a pedir as informações.
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	char name[100];
    	char pass[100];
    	
    	do {
    		printf("Digite seu nome de usuário: ");
    		scanf("%s", &name);
    		
    		printf("Digite sua senha: ");
    		scanf("%s", &pass);
    		
    		if (strcmp(pass, name) != 0) {
    			printf("Registrado com sucesso!\n");
			} else {
				printf("Senha inválida\n");
			}
		} while (strcmp(pass, name) == 0);
    	

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

