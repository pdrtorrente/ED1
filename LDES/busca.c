#include <stdio.h>
#include "busca.h"

int busca_pos (lista *li, int pos, dados *db){
    if (li != NULL){
        if (lista_vazia(li) || pos < 0 || pos > tamanho(li)){
            return 0;
        } else {
            int i = 0;
            cel *aux = *li;
            while (aux->seg != NULL || i < pos){
                aux = aux->seg;
                i++;
            }
            *db = aux->d;
            return 1;
        }
    }
    return -1;
}

// busca por condição