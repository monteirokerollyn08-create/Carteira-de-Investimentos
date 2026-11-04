#include <stdio.h>
#include "../include/funcoes.h"
#include "../include/modulo.h"

int main() {
    Ativo carteira[LIMITE];
    int total;
    int opcao = 0;
    float valorTotal;
    float rentabilidade;

    total = carregarCarteira(carteira);

    while (opcao != 5) {
        printf("\n=== Carteira de Investimentos ===\n");
        printf("1 - Cadastrar ativo\n");
        printf("2 - Listar ativos\n");
        printf("3 - Valor total da carteira\n");
        printf("4 - Rentabilidade geral\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAtivo(carteira, &total);
                break;

            case 2:
                listarAtivos(carteira, total);
                break;

            case 3:
                valorTotal = calcularValorTotal(carteira, total);
                printf("\nValor total: R$ %.2f\n", valorTotal);
                break;

            case 4:
                rentabilidade =
                    calcularRentabilidadeGeral(carteira, total);
                printf("\nRentabilidade geral: %.2f%%\n",
                       rentabilidade);
                break;

            case 5:
                salvarCarteira(carteira, total);
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }
    }

    return 0;
}
