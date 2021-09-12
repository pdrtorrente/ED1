#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "criadestroi.h"
#include "infos.h"
#include "insereremove.h"
#include "busca.h"

void imprime (lista *li){
    if (li == NULL){
        printf("deu errado!\n");
    } else {
        if (lista_vazia(li)){
            printf("lista vazia\n");
        } else {
            cel *aux = *li;
            while (aux != NULL){
                printf("%d | %s\n", (aux->d).x, (aux->d).str);
                aux = aux->seg;
            }
        }
    }
    printf("\n");
}

int main (void){
    lista *li = cria_lista();

    //imprime(li);

    dados d1 = {23, "primeiro"};
    dados d2 = {52, "segundo"};
    dados d3 = {79, "terceiro"};
    dados d4 = {56, "quarto"};

    insere_inicio (li, d1);
    insere_final (li, d2);
    insere_final (li, d3);
    insere_final (li, d4);

    imprime (li);
    dados dx;
    busca_pos (li, 6,&dx);
    printf("%d | %s\n\n", dx.x, dx.str);

    remove_inicio(li);
    remove_fim(li);
    imprime(li);

    int tam = tamanho(li);
    int x = destroi_lista(li);
    //printf("%d %d\n", tam, x);
}