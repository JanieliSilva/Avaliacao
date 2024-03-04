Escreva dois programas que recebem como parâmetro três inteiros representando os coeficientes
de uma função do segundo grau e execute:
(a) O teste para saber se essa função tem raízes reais;
(b) O valor das raízes reais.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void testeRaizesReais(int a, int b, int c) {
    double delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        printf("A função tem duas raízes reais distintas.\n");
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        printf("A função tem apenas uma raiz real.\n");
        double x = -b / (2 * a);
        printf("A raiz real é x = %.2f\n", x);
    } else {
        printf("A função não tem raízes reais.\n");
    }
}

int main() {
    int a = 1, b = -5, c = 6;
    testeRaizesReais(a, b, c);

    return 0;
}
