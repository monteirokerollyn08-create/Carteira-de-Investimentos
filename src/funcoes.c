#include <stdio.h>
#include "../include/funcoes.h"

void cadastrarAtivo(Ativo carteira[], int *total) {
    if (*total >= LIMITE) {
        printf("\nA carteira esta cheia!\n");
        return;
    }

    printf("\n--- Cadastro de Ativo ---\n");

    printf("Nome do ativo: ");
    scanf(" %49[^\n]", carteira[*total].nome);

    printf("Categoria: ");
    scanf(" %29[^\n]", carteira[*total].categoria);

    printf("Quantidade: ");
    scanf("%d", &carteira[*total].quantidade);

    printf("Preco de compra: ");
    scanf("%f", &carteira[*total].precoCompra);

    printf("Preco atual: ");
    scanf("%f", &carteira[*total].precoAtual);

    (*total)++;

    salvarCarteira(carteira, *total);

    printf("\nAtivo cadastrado com sucesso!\n");
}

void listarAtivos(Ativo carteira[], int total) {
    int i;
    float valor;
    float rentabilidade;

    if (total == 0) {
        printf("\nNenhum ativo cadastrado.\n");
        return;
    }

    printf("\n--- Ativos cadastrados ---\n");

    for (i = 0; i < total; i++) {
        valor = carteira[i].precoAtual *
                carteira[i].quantidade;

        if (carteira[i].precoCompra > 0) {
            rentabilidade =
                ((carteira[i].precoAtual -
                  carteira[i].precoCompra) /
                  carteira[i].precoCompra) * 100;
        } else {
            rentabilidade = 0;
        }

        printf("\n%d. %s\n", i + 1, carteira[i].nome);
        printf("Categoria: %s\n", carteira[i].categoria);
        printf("Quantidade: %d\n", carteira[i].quantidade);
        printf("Preco atual: R$ %.2f\n",
               carteira[i].precoAtual);
        printf("Valor atual: R$ %.2f\n", valor);
        printf("Rentabilidade: %.2f%%\n", rentabilidade);
    }
}

int carregarCarteira(Ativo carteira[]) {
    FILE *arquivo;
    int total = 0;

    arquivo = fopen("data/carteira.txt", "r");

    if (arquivo == NULL) {
        arquivo = fopen("data/carteira.txt", "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir carteira.txt!\n");
            return 0;
        }

        fclose(arquivo);
        return 0;
    }

    while (total < LIMITE &&
           fscanf(arquivo, " %49[^;];%29[^;];%d;%f;%f",
                  carteira[total].nome,
                  carteira[total].categoria,
                  &carteira[total].quantidade,
                  &carteira[total].precoCompra,
                  &carteira[total].precoAtual) == 5) {
        total++;
    }

    fclose(arquivo);

    return total;
}

void salvarCarteira(Ativo carteira[], int total) {
    FILE *arquivo;
    int i;

    arquivo = fopen("data/carteira.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao salvar carteira.txt!\n");
        return;
    }

    for (i = 0; i < total; i++) {
        fprintf(arquivo, "%s;%s;%d;%.2f;%.2f\n",
                carteira[i].nome,
                carteira[i].categoria,
                carteira[i].quantidade,
                carteira[i].precoCompra,
                carteira[i].precoAtual);
    }

    fclose(arquivo);
}
