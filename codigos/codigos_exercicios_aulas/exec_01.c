#include <stdio.h>

int main(void)
{
  int idade_um = 0, idade_dois = 0, idade_tres = 0;
  float peso_um = 0.0, peso_dois = 0.0, peso_tres = 0.0, media_idade, media_peso;
  char pessoa_um[15], pessoa_dois[15], pessoa_tres[15];

  printf("Digite o nome da pessoa 1: ");
  scanf("%s", pessoa_um);

  printf("Digite o peso da pessoa 1: ");
  scanf("%f", &peso_um);

  printf("Digite a idade da pessoa 1: ");
  scanf("%d", &idade_um);

  printf("Digite o nome da pessoa 2: ");
  scanf("%s", pessoa_dois);

  printf("Digite o peso da pessoa 2: ");
  scanf("%f", &peso_dois);

  printf("Digite a idade da pessoa 2: ");
  scanf("%d", &idade_dois);

  printf("Digite o nome da pessoa 3: ");
  scanf("%s", pessoa_tres);

  printf("Digite o peso da pessoa 3: ");
  scanf("%f", &peso_tres);

  printf("Digite a idade da pessoa 3: ");
  scanf("%d", &idade_tres);

  media_idade = (float)(idade_um + idade_dois + idade_tres) / 3;
  media_peso = (float)(peso_um + peso_dois + peso_tres) / 3;

  printf("Nome da pessoa 1: %s\n", pessoa_um);
  printf("Nome da pessoa 2: %s\n", pessoa_dois);
  printf("Nome da pessoa 3: %s\n", pessoa_tres);

  printf("A media das idades e: %f.\n", media_idade);

  if (media_peso > 55)
  {
    printf("A media dos pesos ultrapassa 55kg.\n");
  }

  return 0;
}