Defina uma função recursiva que dados os valores de x1 e x2 retorne exatamente y = x1x2

#include <stdio.h>
#include <stdlib.h>

int multiply(int x1, int x2) {
  if (x2 == 0) {
    return 0;
  } else if (x2 == 1) {
    return x1;
  } else {
    return x1 + multiply(x1, x2 - 1);
  }
}

int main() {
  int x1 = 3;
  int x2 = 4;
  int y = multiply(x1, x2);

  printf("O produto de %d e %d é %d.\n", x1, x2, y);

  return 0;
}
