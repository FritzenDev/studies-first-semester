#include <stdio.h>

/*
Leia a hora inicial e a hora final de um jogo. 
A seguir calcule a dura��o do jogo, sabendo que 
o mesmo pode come�ar em um dia e terminar em outro, tendo 
uma dura��o m�nima de 1 hora e m�xima de 24 horas.
*/

int main() {

    char continuar;

    do {
    	float hI, hF, calc;
    	
    	scanf("%f%f", &hI, &hF);

		if (hI < hF ) {
			calc = hF - hI;
		} else {
			calc = 24 - hI + hF;
		}
		
		printf("O JOGO DUROU %.f HORA(S)\n", calc);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
