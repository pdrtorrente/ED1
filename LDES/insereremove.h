#ifndef __INSEREREMOVE_H__
#define __INSEREREMOVE_H__
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int insere_final (lista *li, dados dn);
int insere_inicio (lista *li, dados dn);
//int insere_meio (lista *li, dados dn - CONDIÇÃO DE INSERÇÃO -);
int remove_inicio (lista *li);
int remove_fim (lista *li);
//int remove_meio (lista *li, dados dn - ELEMENTO PARA REMOÇÃO -);

#endif