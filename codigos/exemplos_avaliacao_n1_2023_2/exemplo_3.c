#include <stdio.h>

int main()
{

  int dias, alertaph, alertatemp, dias95, i;
  float ph, temp, tempmedia;
  char op;

  dias = 0;
  alertaph = 0;
  tempmedia = 0;
  alertatemp = 0;
  dias95 = 0;

  do
  {
    printf("insira ph");
    scanf("%f", &ph);
    if (ph > 8)
    {
      printf("PH > 8: ALERTA! \n");
      alertaph = alertaph + 1;
    }
    else if (ph < 6)
    {
      printf("PH < 6: ALERTA!");
    }
    for (i = 1; i <= 24; i++)
    {
      printf("\n insira temperatura");
      scanf("%f", &temp);
      tempmedia = tempmedia + temp;
      if (temp > 90 && temp <= 110)
      {
        printf("resfrie");
      }
      else if (temp > 110)
      {
        printf("TEMPERATURA > 110: ALERTA!");
        alertatemp = alertatemp + 1;
      }
    }

    printf("a temperatura media de hoje foi: %f", tempmedia / 24);
    printf("deseja continuar? s ou n");
    scanf(" %c", &op);
    dias = dias + 1;
    if (tempmedia / 24 >= 95)
    {
      dias95 = dias95 + 1;
    }
  } while (op != 'n');

  printf("numero de dias: %d", dias);
  printf("\n numero de alertas de PH > 8: %d", alertaph);
  printf("\n numero de alertas de temperatura > 110: %d", alertatemp);
  printf("\n numero de dias com temperatura media > 95: %d", dias95);

  if (alertaph == 0 && alertatemp == 0)
  {
    printf("\n APROVADO");
  }
  else
  {
    printf("\n NAO APROVADO");
  }
}
