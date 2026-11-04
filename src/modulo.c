#include "../include/modulo.h"

float calcularValorTotal(Ativo carteira[], int total) {
    int i;
    float valorTotal = 0;

    for (i = 0; i < total; i++) {
        valorTotal += carteira[i].precoAtual *
                      carteira[i].quantidade;
    }

    return valorTotal;
}

float calcularRentabilidadeGeral(Ativo carteira[], int total) {
    int i;
    float valorInvestido = 0;
    float valorAtual = 0;

    for (i = 0; i < total; i++) {
        valorInvestido += carteira[i].precoCompra *
                          carteira[i].quantidade;

        valorAtual += carteira[i].precoAtual *
                      carteira[i].quantidade;
    }

    if (valorInvestido == 0) {
        return 0;
    }

    return ((valorAtual - valorInvestido) /
            valorInvestido) * 100;
}
