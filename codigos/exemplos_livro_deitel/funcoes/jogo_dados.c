#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main()
{
  int gameStatus, sum, myPoint;
  srand(time(NULL));
  sum = rollDice(); /* primeira jogada dos dados */

  switch (sum)
  {
  case 7:
  case 11: /* vence na primeira jogada */
    gameStatus = 1;
    break;
  case 2:
  case 3:
  case 12: /* perde na primeira jogada */
    gameStatus = 2;
    break;
  default: /* armazena o ponto */
    gameStatus = 0;
    myPoint = sum;
    printf("O ponto é %d\n", myPoint);
    break;
  }

  while (gameStatus == 0)
  { /* continua jogando */
    sum = rollDice();
    if (sum == myPoint) /* vence fazendo o ponto */
      gameStatus = 1;
    else if (sum == 7) /* perde obtendo o valor 7 */
      gameStatus = 2;
  }

  if (gameStatus == 1)
    printf("Jogador vence\n");
  else
    printf("Jogador perde\n");

  return 0;
}

int rollDice(void)
{
  int die1, die2, workSum;
  die1 = 1 + (rand() % 6);
  die2 = 1 + (rand() % 6);
  workSum = die1 + die2;
  printf("Jogador obteve %d + %d = %d\n", die1, die2, workSum);
  return workSum;
}
