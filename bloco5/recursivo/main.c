#include <stdio.h>

int sum(int k);

int main() {
  int numero;
  printf("Digite um numero: ");
  scanf(&numero);
  int result = sum(numero);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
