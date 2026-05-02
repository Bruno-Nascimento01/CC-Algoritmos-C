#include <stdio.h>
#include <stdlib.h>

// Constantes definidas com #define para facilitar manutenção:
// se precisar mudar a quantidade, altera só aqui, não em todo o código.
#define QTD_VENDAS 5
#define QTD_VENDEDOR 2

int main() {

    int linhas, colunas;

    // Matriz 2D: cada linha é um vendedor, cada coluna é uma venda.
    // Iniciada com {0} para garantir que não haja lixo de memória nos valores.
    double tabela[QTD_VENDEDOR][QTD_VENDAS] = {0};

    double somaIndividual; // Acumulador reutilizado a cada iteração do vendedor.
    char opcao;            // Armazena a confirmação do usuário (S/N).

    printf("############## SISTEMA DE VENDAS ##############\n");

    // Loop de validação: repete a entrada de dados enquanto o usuário
    // não confirmar que os valores estão corretos.
    do {

        // Percorre cada vendedor (linhas da matriz).
        for (linhas = 0; linhas < QTD_VENDEDOR; linhas++) {
            printf("\n--> Digite as vendas do %dº vendedor <--\n", linhas + 1);

            // Percorre cada venda do vendedor atual (colunas da matriz).
            for (colunas = 0; colunas < QTD_VENDAS; colunas++) {
                printf("Digite o valor da %dª venda: ", colunas + 1);
                scanf("%lf", &tabela[linhas][colunas]); // %lf para double
            }
        }

        // Exibe os valores preenchidos para conferência antes de confirmar.
        printf("\n------------ Valores digitados -----------\n");
        for (linhas = 0; linhas < QTD_VENDEDOR; linhas++) {
            printf("[ Vendedor %d ]\n", linhas + 1);
            for (colunas = 0; colunas < QTD_VENDAS; colunas++) {
                printf("Venda %d: R$%.2lf\n", colunas + 1, tabela[linhas][colunas]);
            }
        }

        printf("\nConfirme se os valores digitados estao corretos (S/N): ");
        // O espaço antes de %c descarta o '\n' residual do último scanf,
        // evitando que a leitura do char seja pulada.
        scanf(" %c", &opcao);

    } while (opcao != 's' && opcao != 'S'); // Aceita tanto maiúscula quanto minúscula.

    // --- Relatório final: calculado após a confirmação dos dados ---
    printf("\n--------- Relatorio total de vendas ---------\n");

    for (linhas = 0; linhas < QTD_VENDEDOR; linhas++) {

        somaIndividual = 0; // Reseta o acumulador a cada novo vendedor.

        for (colunas = 0; colunas < QTD_VENDAS; colunas++) {
            somaIndividual += tabela[linhas][colunas]; // Soma as vendas do vendedor atual.
        }

        printf("Total do %dº vendedor: R$%.2lf\n", linhas + 1, somaIndividual);
    }

    printf("---------------------------------------------\n");

    return 0; // Indica ao SO que o programa terminou sem erros.
}
