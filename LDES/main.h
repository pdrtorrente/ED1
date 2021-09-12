#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    char str[64];
}dados;

typedef struct celula cel;

struct celula {
    dados d;
    cel* seg;
};

typedef cel* lista;

void imprime (lista *li);

#endif