#include <stdio.h>
#include <stdlib.h>
#include "criadestroi.h"

lista* cria_lista (){
    lista* li = malloc (sizeof(lista));
    if (li == NULL){
        exit(-1);
    }
    *li = NULL;
    return li;
}

int destroi_lista (lista *li){
    if (li != NULL){
        cel *no;
        while (*li != NULL){
            no = *li;
            *li = (*li)->seg;
            free (no);
        }
        free (li);
        return 1;
    }
    return 0;
}