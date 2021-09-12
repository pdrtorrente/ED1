#include <stdio.h>
#include <stdlib.h>
#include "insereremove.h"
#include "infos.h"

int insere_final (lista *li, dados dn){
    if (li != NULL){
        cel *no = malloc(sizeof(cel));
        if (no != NULL){
            no->d = dn;
            no->seg = NULL;
        } else {
            return -1;
        }
        if (!lista_vazia(li)){
            cel *aux = *li;
            while(aux->seg != NULL){
                aux = aux->seg;
            }
            aux->seg = no;
            return 1;
        } else {
            *li = no;
            return 1;
        }
    }
    return -1;
}

int insere_inicio (lista *li, dados dn){
    if (li != NULL){
        cel *no = malloc(sizeof(cel));
        if (no != NULL){
            no->d = dn;
            no->seg = *li;
        } else {
            return -1;
        }
        *li = no;
    }
    return -1;
}

/*int insere_meio (lista *li, dados dn){
    if (li != NULL){
        cel *no = malloc(sizeof(cel));
        if (no != NULL){
            no->d = dn;
        } else {
            return -1;
        }
        if (!lista_vazia(li)){
            ## CONDIÇÃO DE INSERÇÃO ##
        } else {
            *li = no;
            no->seg = NULL;
            return 1;
        }
    }
    return -1;
}*/

int remove_inicio (lista *li){
    if (li != NULL){
        if (!lista_vazia(li)){
            cel *no = *li;
            *li = (*li)->seg;
            free(no);
            return 1;
        }
        return 0;
    }
    return -1;
}

int remove_fim (lista *li){
    if (li != NULL){
        if (!lista_vazia(li)){
            /*cel *no;
            cel *aux = *li;
            if (tamanho > 1){
                while((aux->seg)->seg != NULL){
                    aux = aux->seg;
                }
                no = aux->seg;
                aux->seg = NULL;
            } else {
                no = *li;
                *li = NULL;
            }
            free(no);
            */ //minha tentativa

            cel *no, *ant = *li;
            while (no->seg != NULL){
                ant = no;
                no = no->seg;
            }
            if (no == *li){
                *li = NULL;
                free (no);
            } else {
                ant->seg = NULL;
                free (no);
            }
            return 1;
        }
        return 0;
    }
    return -1;
}