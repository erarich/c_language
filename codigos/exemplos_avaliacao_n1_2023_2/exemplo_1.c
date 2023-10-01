#include <stdio.h>

void main(void)
{

  // Declaração de Variáveis
  float temperatura, ph;
  float mediaTemp = 0;
  float somaTemp = 0;

  // Variáveis Contadoras
  int dias = 0;
  int alertaPH = 0;
  int aprovamento = 0;
  int alertaTemp = 0;
  int tempAlta = 0;
  int medindoTemp = 0;

  // Variáveis de Controle
  int encerrarAudit = 0;

  // Execução para cada dia
  while (encerrarAudit != 2)
  {

    dias++;

    printf("Digite o ph: ");
    scanf("%f", &ph);
    // ALERTA DE PH
    if (ph > 8 || ph < 6)
    {
      printf("\n---------------------------\n");
      printf("PH fora do intervalo adequado!!");
      printf("\n---------------------------");
      aprovamento = 1;
      if (ph > 8)
      {
        alertaPH++;
      }
    }

    for (int i = 1; i <= 24; i++)
    {
      printf("\nDigite a temperatura: ");
      scanf("%f", &temperatura);
      somaTemp = somaTemp + temperatura;

      // ALERTA DE TEMPERATURA
      if (temperatura > 90 && temperatura <= 110)
      {
        printf("\n---------------------------\n");
        printf("O Produto necessita ser resfriado!!");
        printf("\n---------------------------\n");
      }
      else
      {
        if (temperatura > 110)
        {
          printf("\n---------------------------\n");
          printf("O Produto esta SUPER AQUECIDO!!");
          printf("\n---------------------------\n");
          alertaTemp = alertaTemp + 1;
          aprovamento = 1;
        }
      }
    }

    mediaTemp = somaTemp / 24;

    printf("\nMedia diaria de temperatura: %.2f \n", mediaTemp);
    if (mediaTemp > 95)
    {
      tempAlta = tempAlta + 1;
    }

    mediaTemp = 0;
    somaTemp = 0;

    printf("\nSeguir para o proximo dia?: \n[1] Sim\n[2] Nao\n>> ");
    scanf("%d", &encerrarAudit);
  }

  // Exibindo Valores Requeridos
  printf("\n-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

  printf("Numeros de dias do periodo: %i", dias);
  printf("\nVezes de alerta de PH acima de 8: %i", alertaPH);
  printf("\nVezes de temperatura acima de 110C: %i", alertaTemp);
  printf("\nQuantidade de temperaturas medias > 95°C: %i", tempAlta);
  if (aprovamento == 0)
  {
    printf("\n===============\n");
    printf("   APROVADO!\n");
    printf("===============\n\n");
  }
  printf("\n-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
