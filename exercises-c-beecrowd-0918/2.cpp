#include <stdio.h>

/*
Você deve fazer um programa que leia um valor qualquer 
e apresente uma mensagem dizendo em qual dos seguintes 
intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. 
Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser 
impressa a mensagem “Fora de intervalo”.
*/

int main() {

    char continuar;

    do {
    	double val;
    	
    	scanf("%lf", &val);
    	
    	if (val >= 0 && val <= 25) {
        printf("Intervalo [0,25]\n");
    	} else if (val > 25 && val <= 50) {
        printf("Intervalo (25,50]\n");
    	} else if (val > 50 && val <= 75) {
        printf("Intervalo (50,75]\n");
    	} else if (val > 75 && val <= 100) {
        printf("Intervalo (75,100]\n");
    	} else {
        printf("Fora de intervalo\n");
    	}
    
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


