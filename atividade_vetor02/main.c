#include <stdio.h>
#include <stdlib.h>

/*Preencha um vetor de inteiros positivos Q dados pelo usu�rio com 20 posi��es (aceitar somente
inteiros positivos). Identifique a seguir qual o maior elemento de Q e a respectiva posi��o que ele
ocupa no vetor.
 */

int main()
{
  int i, maior = 0, posicao = 0;
  int Q[5];
  int invalido(){
   printf("impossivel realizar operacao");
  }

  printf("Digite o valor dos vetores \n");

  for(i = 0 ; i < 5 ; i++){
    scanf("%d", &Q[i]);
  }
 for(i = 0 ; i < 5 ; i++){
    if(Q[i] < 0){
    invalido();
    }
  }
 for(i = 0 ; i < 5 ; i++){
    if(maior < Q[i]){
      maior = Q[i];
      posicao = i + 1;
    }
 }

printf("O maior valor eh: %d \n", maior);
printf("A posicao eh: %d", posicao);
}
