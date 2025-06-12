#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    printf("Content-type: text/html\n\n");
    char *recebido = getenv("QUERY_STRING");

    printf("Ano de nascimento: %s", recebido);

    return 0;
}