#include "infos.h"

int tamanho (lista *li){
    if (li != NULL){
        int t = 0;
        cel *no;
        no = *li;
        while (no != NULL){
            no = no->seg;
            t++;
        }
        return t;
    }
    return -1;
}

int lista_vazia (lista *li){
    if (li == NULL || *li == NULL){
        return 1;
    }
    return 0;
}