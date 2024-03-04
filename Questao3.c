// Um triângulo retângulo pode ter lados inteiros. O conjunto
// de três valores inteiros para os lados de um triângulo retângulo é chamado
// de triplo pitagórico. Esses três lados devem satisfazer a relação de que a
// soma dos quadrados de dois dos lados é igual ao quadrado da hipotenusa.
// Encontre todos os triplos pitagóricos para cateto1, cateto2 e a hipotenusa,
// todos com até o valor de n, indicado como parâmetro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ladosPitagoricos(int limit){
    int c, a, b;
    int i;
    int j;
    for (i = 1; i < limit; i++){
        for(j = 1; j < limit;j++){         
            a = pow(i,2);
            b = pow(j,2);
            c = sqrt((a+b));
            if((a+b) == pow(c,2)){
                printf("%i %i %i\n", i, j, c);
            }
        }
    }
}

int main(){
ladosPitagoricos(20);
}
