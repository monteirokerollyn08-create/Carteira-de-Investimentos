#ifndef MODULO_H
#define MODULO_H

typedef struct {
    char nome[50];
    char categoria[30];
    int quantidade;
    float precoCompra;
    float precoAtual;
} Ativo;

float calcularValorTotal(Ativo carteira[], int total);
float calcularRentabilidadeGeral(Ativo carteira[], int total);

#endif
