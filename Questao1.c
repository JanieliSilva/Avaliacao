// Uma aplicação interessante de computadores é desenhar gráficos
// e gráficos de barras.Escreva um programa que leia cinco números
// (cada um entre 1 e 30). Para cada número lido, seu programa deve
// imprimir uma
// linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu
// programa lê o número sete, ele deve imprimir ∗ ∗ ∗ ∗ ∗ ∗ ∗

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qnt[5], i, j;
    i = 0;
   
    for (j = 0; j < 5; j++)
    {
        printf("\nInsira um numero: ");
        scanf("%i", &qnt[j]);
    }
  
    for (j = 0; j < 5; j++)
    {

       for (i = 0; i < qnt[j]; i++)
        {
            printf(" * ");
        }
        printf("\n");
    }
        
    
}
