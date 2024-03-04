//  Escreva uma função que recebe como entrada um valor inteiro e retorna outro inteiro com os
// valores revertidos. Por exemplo:
// f(1234) = 4321

#include <stdio.h>
#include <stdlib.h>

int inverterNumeroRecursivo(int n, int invertido){
    if(n == 0){
        return invertido;
    }
    
    int ultimoN = n % 10;
    invertido = invertido * 10 + ultimoN;
    return inverterNumeroRecursivo(n / 10, invertido);
}  

int main() {
   int n = 4321, invertido;
  invertido =  inverterNumeroRecursivo(n , 0);
  printf("\nInvertido recursivo: %i", invertido);
  invertido = inverterNumero(n);
  printf("\nInvertido iterativo: %i", invertido);
}
