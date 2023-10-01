#include <stdio.h>

int main()
{

  float temperatura, ph, total_temperatura, media_temperatura;
  int i, dias, cont_alerta_ph, cont_temperatura_110, cont_dias_media;
  char op;

  cont_alerta_ph = 0;
  total_temperatura = 0;
  cont_dias_media = 0;
  cont_temperatura_110 = 0;

  do
  {
    ph = 0;
    printf("Qual o PH do produto? ");
    scanf("%f", &ph);

    if (ph < 6.0 || ph > 8.0)
    {
      printf("PH FORA DO DESEJADO - SINAL DE ALERTA EMITIDO\n");
      if (ph > 8.0)
      {
        cont_alerta_ph++;
      }
    }
    temperatura = 0;
    for (i = 0; i < 24; i++)
    {
      printf("\nDigite a temperatura da hora: ");
      scanf("%f", &temperatura);
      total_temperatura += temperatura;

      if (temperatura >= 90.0 && temperatura <= 110.0)
      {
        printf("SOLICITACAO DE RESFRIAMENTO\n");
      }
      else
      {
        if (temperatura > 110.0)
        {
          printf("SINAL DE ALERTA\n");
          cont_temperatura_110++;
        }
      }
    }

    media_temperatura = total_temperatura / 24.0;

    if (media_temperatura > 95.0)
    {
      cont_dias_media++;
    }

    printf("Média da temperatura do dia: %.2f\n", media_temperatura);
    printf("Deseja medir mais um dia? ");
    scanf(" %c", &op);
    total_temperatura = 0;

  } while (op != 'n');

  printf("Contador de ph acima de 8 - %d\n", cont_alerta_ph);
  printf("Contador de alerta - Temperatura acima de 110 - %d\n", cont_temperatura_110);
  printf("Quantos dias tiveram temperatura média de 95 - %d\n", cont_dias_media);

  if (cont_alerta_ph == 0 && cont_temperatura_110 == 0)
  {
    printf("Aprovado");
  }
}
