#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Um grupo de crian�as brinca de piratas e troca mensagens "secretas" entre si invertendo o texto, ou
seja, escrevendo de tr�s para frente. Fa�a um programa que pegue do usu�rio uma mensagem e
imprima na tela sua forma "secreta". Ex.: "FUTEBOL HOJE MAIS TARDE" se transformaria em
"EDRAT SIAM EJOH LOBETUF". */

int main()
{
  char palavras[100];
    char inverso[100];

    printf("Digite a frase: ");
    gets(palavras);


    int j = 0;
    for(int i=strlen(palavras)-1; i>=0;i--) {
        inverso[j] = palavras[i];
        j += 1;
    }

    inverso[j] = '\0';

    printf("%s", inverso);
    return 0;
}

