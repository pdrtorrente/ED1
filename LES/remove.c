#include <stdio.h>
#include "remove.h"

int rm_valido(lista *Lista){
    if (Lista == NULL || Lista->qtd == 0){
        return 0;
    }
    return 1;
}

int remove_final(lista *Lista){
    if (!rm_valido(Lista)){
        return 0;
    } 
    Lista->qtd--;
    return 1;
}

int remove_inicio(lista *Lista){
    if (!rm_valido(Lista)){
        return 0;
    } 
    for (int i = 0; i < Lista->qtd; i++){
        Lista->li[i] = Lista->li[i+1];
    }
    Lista->qtd--;
    return 1;
}

int remove_especifico(lista *Lista, int val){
    if (!rm_valido(Lista)){
        return 0;
    } 
    int i = 0;
    while (i < Lista->qtd && Lista->li[i].valor != val){
        i++;
    }

    if (i == Lista->qtd){
        return 0;
    }

    for (int k = i; k < Lista->qtd; k++){
        Lista->li[k] = Lista->li[k+1];
    }
    Lista->qtd--;
    return 1;
}