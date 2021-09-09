/** FUNÇÕES
 * - informações
 * - inserção
 * - remoção
 * - busca
 * - destruição da lista
 **/

#include <stdio.h>
#include "main.h"
#include "criadestroi.h"
#include "infos.h"
#include "insere.h"
#include "remove.h"
#include "busca.h"

void imprime (lista *lst){
    for (int i = 0; i < lst->qtd; i++){
        printf("%s - ", lst->li[i].string);
    }
    printf("\n---------------\n");
}

int main (void){
    lista *lista_principal = cria_lista();
    
    struct dados d0 = {0, "Pedro"};
    struct dados d1 = {1, "Michel"};
    struct dados d2 = {2, "Heitor"};
    struct dados d3 = {3, "BiaTriz"};
    struct dados d4 = {4, "BiaLomes"};

    /*lista_principal->li[0] = d0;
    lista_principal->qtd++;*/
    imprime(lista_principal);
    insere_final(lista_principal, d1);
    imprime(lista_principal);
    insere_ordenado(lista_principal, d2);
    imprime(lista_principal);
    insere_ordenado(lista_principal, d3);
    imprime(lista_principal);
    insere_ordenado(lista_principal, d0);
    imprime(lista_principal);
    insere_inicio(lista_principal, d4);
    imprime(lista_principal);
    
    remove_final(lista_principal);
    imprime(lista_principal);
    remove_inicio(lista_principal);
    imprime(lista_principal);
    remove_especifico(lista_principal, 2);
    imprime(lista_principal);
    remove_especifico(lista_principal, 1);
    imprime(lista_principal);

    destroi_lista (lista_principal);
}