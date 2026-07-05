#include <stdio.h>

int main(void)
{
  int caracter1 = 65; /*Suele ser el valor numérico de A*/
  char caracter2 = 'A';

  printf("La letra con valor numérico de 65 es:\n");
  putc(caracter1,stdout);
  printf("Y la variable caracter2 contiene la letra:\n");
  putchar(caracter2);
  return 0;
}