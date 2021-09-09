#include <stdio.h>
#include "infos.h"

int lista_cheia (lista *Lista){
    if (Lista == NULL){
        return -1;
    } else if (Lista->qtd < MAX){
        return 0;
    }
    return 1;
}

int lista_vazia (lista *Lista){
    if (Lista == NULL){
        return -1;
    } else if (Lista->qtd > 0){
        return 0;
    }
    return 1;
}