#include <stdio.h>

/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo. 
Em caso positivo, calcule o per�metro do tri�ngulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a �rea do trap�zio que tem A e B como 
base e C como altura, mostrando a mensagem


Area = XX.X
*/

int main() {

    char continuar;

    do {
    	double A, B, C;
    	
    	scanf("%lf%lf%lf", &A, &B, &C);
    	
    	if (A + B > C && A + C > B && B + C > A) {
    		double perimetro = A + B + C;
    		printf("Perimetro = %.1lf\n", perimetro);
		} else {
			double area = ((A + B) * C) / 2;
			printf("Area = %.1lf\n", area);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}
