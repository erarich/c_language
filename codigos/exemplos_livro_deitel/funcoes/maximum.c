#include <stdio.h>

int maximum(int, int, int); /* Protótipo da função */

int main()
{
  int a, b, c;
  printf("Entre com tres inteiros: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("O maior e: %d\n", maximum(a, b, c));
  return 0;
}

/* Definição da função maximum */
int maximum(int x, int y, int z)
{
  int max = x;
  if (y > max)
  {
    max = y;
  }
  if (z > max)
  {
    max = z;
  }
  return max;
}
