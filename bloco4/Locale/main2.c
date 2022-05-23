#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "");
  printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");
  printf("localidade: %s", setlocale(LC_ALL, NULL));
}