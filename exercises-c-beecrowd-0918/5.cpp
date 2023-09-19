#include <stdio.h>
#include <math.h>

/*
A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o c�lculo da �rea, elevando o valor de raio ao quadrado e multiplicando por p.
*/

int main() {

    char continuar;

    do {
    	double raio, area;
    	const double pi = 3.14159;

    	scanf("%lf", &raio);

    	area = pi * raio * raio;

    	printf("A=%.4lf\n", area);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
