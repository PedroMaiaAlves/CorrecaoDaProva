#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {


    srand(time(NULL));


    int portaPremiada =rand() % 3 + 1;
    int portaVazia;
    int portaEscolhida;

    char opcao;

  printf("Bem-vindo ao jogo Monty Hall! \n");


  printf("Escolha a sua porta (1,2 ou 3\n");
  fflush(stdout);
  scanf("%d", &portaEscolhida);
  printf("A porta escolhida foi a %d\n", portaEscolhida);
  printf("A porta sorteada foi a %d\n", portaPremiada);


  do{
    portaVazia=rand() % 3 + 1 ;
  }
  while(portaVazia == portaPremiada && portaVazia == portaEscolhida);

  printf("Foi aberto a porta vazia %d\n",portaVazia);

  printf("Deseja trocar a sua porta? (s = sim n = não)");
  fflush(stdout);
  scanf(" %c", &opcao);
    if(opcao == 's' && portaPremiada == portaEscolhida)
  {
    printf("Você perdeu o prêmio");
  } if (opcao == 'n' && portaPremiada == portaEscolhida){
      printf("Você Ganhou o prêmio!");
  } if (opcao == 's' && portaPremiada != portaEscolhida){
      printf("Você Ganhou o prêmio!");
  }  if (opcao == 'n' && portaPremiada != portaEscolhida){
      printf("Você Ganhou o prêmio!");
  }
    return 0;
}
