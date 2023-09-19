#include <stdio.h>
#include <math.h>

/*
A fórmula para calcular a área de uma circunferência é: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por p.
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
