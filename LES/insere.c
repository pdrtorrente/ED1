#include <stdio.h>
#include "insere.h"

int ins_valido (lista *Lista){
    if (Lista == NULL || lista_cheia(Lista)){
        return 0;
    }
    return 1;
}

int insere_final (lista *Lista, struct dados dn){
    if (!ins_valido(Lista)){
        return 0;
    }
    Lista->li[Lista->qtd] = dn;
    Lista -> qtd ++;
    return 1;
}

int insere_inicio (lista *Lista, struct dados dn){
    if (!ins_valido(Lista)){
        return 0;
    }
    for (int i = Lista->qtd; i >= 0; i--){
        Lista->li[i+1] = Lista->li[i];
    }
    Lista->li[0] = dn;
    Lista->qtd++;
    return 1;
}

int insere_ordenado (lista *Lista, struct dados dn){
    if (!ins_valido(Lista)){
        return 0;
    }

    int i = 0;
    while (i < Lista->qtd && Lista->li[i].valor < dn.valor){
        i++;
    }

    for (int k = Lista->qtd; k >= i; k--){
        Lista->li[k+1] = Lista->li[k];
    }
    Lista->li[i] = dn;
    Lista->qtd++;
    return 1;
}