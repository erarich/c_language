#include <stdio.h>

int square(int); /* Protótipo da função */

int main()
{
  int x;
  for (x = 1; x <= 10; x++)
  {
    printf("%d ", square(x));
  }

  return 0;
}

/* Definição da função */
int square(int y)
{
  return y * y;
}
