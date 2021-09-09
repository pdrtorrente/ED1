#ifndef __INSERE_H__
#define __INSERE_H__
#include <stdio.h>
#include "main.h"
#include "infos.h"

int ins_valido (lista *Lista);
int insere_final (lista *Lista, struct dados dn);
int insere_inicio (lista *Lista, struct dados dn);
int insere_ordenado (lista *Lista, struct dados dn);

#endif