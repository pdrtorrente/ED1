#ifndef __REMOVE_H__
#define __REMOVE_H__
#include <stdio.h>
#include "main.h"

int rm_valido(lista *Lista);
int remove_final(lista *Lista);
int remove_inicio(lista *Lista);
int remove_especifico(lista *Lista, int val);

#endif