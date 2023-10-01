#include <stdio.h>

int main(void)
{
  int i, contardia = 0, contar110 = 0, contarph = 0, contarmaior95 = 0, contaralerta = 0;
  float ph, temp, mediatemp, somatemp;
  char sn;

  do
  {
    printf("Insira o ph:\n");
    scanf("%f", &ph);

    if (ph > 6.0 && ph < 8.0)
    {
      printf("Ph desejavel\n\n");
    }
    else if (ph > 8.0)
    {
      printf("ALERTA\n");
      contarph++;
      contaralerta++;
    }
    else
    {
      printf("ALERTA\n");
      contaralerta++;
    }
    contardia++;
    mediatemp = 0;
    somatemp = 0;
    for (i = 1; i <= 24; i++)
    {
      printf("Insira a temperatura da hora %d:\n", i);
      scanf("%f", &temp);

      if (temp < 90)
      {
        printf("Temperatura Normal\n");
      }
      else if (temp < 110)
      {
        printf("Solicitacao de resfriamento\n");
      }
      else
      {
        printf("ALERTA\n");
        contar110++;
        contaralerta++;
      }
      somatemp = somatemp + temp;
    }
    mediatemp = somatemp / 24;

    if (mediatemp > 95)
    {
      contarmaior95++;
    }
    printf("A temperatura media do dia foi: %.2f\n", mediatemp);

    printf("Deseja continuar a auditoria? Insira 's' para sim e 'n' para nao:\n");
    scanf(" %c", &sn);

  } while (sn != 'n');

  printf("Numero de dias: %d\n", contardia);
  printf("Numero de vezes que o ALERTA foi emitido por causa do ph ,maior que 8.0: %d\n", contarph);
  printf("Numero de vezes que a temperatura passou dos 110 graus celsius: %d\n", contar110);
  printf("Numero de vezes que a temperatura media foi maior que 95 graus celsius: %d\n", contarmaior95);
  if (contaralerta == 0)
  {
    printf("Aprovado");
  }
}
