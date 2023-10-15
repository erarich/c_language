#include <stdio.h>
#include <stdlib.h>

int main()
{
  int face, jogada, frequencia1 = 0, frequencia2 = 0,
                    frequencia3 = 0, frequencia4 = 0,
                    frequencia5 = 0, frequencia6 = 0;

  for (jogada = 1; jogada <= 6000; jogada++)
  {
    face = 1 + rand() % 6;

    switch (face)
    {
    case 1:
      ++frequencia1;
      break;
    case 2:
      ++frequencia2;
      break;
    case 3:
      ++frequencia3;
      break;
    case 4:
      ++frequencia4;
      break;
    case 5:
      ++frequencia5;
      break;
    case 6:
      ++frequencia6;
      break;
    }
  }

  printf("%s%13s\n", "Face", "Frequência");
  return 0;
}
