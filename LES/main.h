#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct dados{
    int valor;
    char string[30];
};

typedef struct{
    int qtd;
    struct dados li[MAX];
} lista;

void imprime (lista *lst);

#endif