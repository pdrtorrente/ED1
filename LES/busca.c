#include "busca.h"

int busca_dado (lista *Lista, int val, struct dados *dp){
    if (Lista == NULL){
        return 0;
    }

    for (int i = 0; i < Lista->qtd; i++){
        if (Lista->li[i].valor == val){
            *dp = Lista->li[i];
            return 1;
        }
    }

    return 0;
}