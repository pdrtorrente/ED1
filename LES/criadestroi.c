#include <stdio.h>
#include <stdlib.h>
#include "criadestroi.h"

lista* cria_lista (){
    lista* Lista;
    Lista = malloc(sizeof(lista*));
    if (Lista != NULL){
        Lista->qtd = 0;
        return Lista;
    }
}

void destroi_lista (lista* Lista){
    free(Lista);
}