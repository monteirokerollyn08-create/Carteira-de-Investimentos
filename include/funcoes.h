#ifndef FUNCOES_H
#define FUNCOES_H

#include "modulo.h"

#define LIMITE 100

void cadastrarAtivo(Ativo carteira[], int *total);
void listarAtivos(Ativo carteira[], int total);
int carregarCarteira(Ativo carteira[]);
void salvarCarteira(Ativo carteira[], int total);

#endif
