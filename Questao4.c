Escreva um programa que imprima uma tabela de todos os equivalentes de algarismos romanos
dos números decimais no intervalo de 1 a 100

#include <stdio.h>
#include <string.h>


void intToRoman(int num, char *roman) {
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i;

    roman[0] = '\0';
    for (i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
    }
}

int main() {
    int i;
    char roman[20];

    printf("Número Decimal\tAlgarismo Romano\n");
    printf("---------------------------------\n");

    for (i = 1; i <= 100; i++) {
        intToRoman(i, roman);
        printf("%d\t\t%s\n", i, roman);
    }

    return 0;
}
