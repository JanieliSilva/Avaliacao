Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
O programa deve imprimir 10 caracteres por linha.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i <= 127; ++i) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("%c (0x%x) ", i, i);
    }
    printf("\n");
    return 0;
}
