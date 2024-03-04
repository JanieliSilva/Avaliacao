Implemente a funçãao recursiva a seguir definida por A(m, n) definido recursivamente da seguinte
forma:
(a) n + 1, se m = 0;
(b) A(m − 1, 1), se m > 0, n = 0;
(c) A(m − 1, A(m, n − 1)), se m > 0 e n > 0.
Crie uma função auxiliar que recebe dois inteiros a e b e apresenta todos os resultados para A(x, y)
de forma que x < a e y < b.

#include <stdio.h>
#include <stdlib.h>

int ackerman (int m, int n){
    if(m == 0){
        return n+1;
    } else if(m > 0 && n == 0){
        return ackerman(m-1,1);
    } else if(m > 0 && n > 0){
        return ackerman(m-1,ackerman(m,n-1));
    }
}


int main(){
    ackerman(4,3);
    
}
