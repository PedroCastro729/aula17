#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    printf("Content-type: text/html\n\n");
    char *recebido = getenv("QUERY_STRING");
  char *posicao = NULL;
  char letra = '=';

  posicao = strchr(recebido, letra);

  char *valor_recebido = posicao+1;

  int numero = atoi(valor_recebido);

  printf("Número: %d", 2025-numero);

  return 0;
}