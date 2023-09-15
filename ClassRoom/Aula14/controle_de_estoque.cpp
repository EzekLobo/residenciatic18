#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um produto
struct Produto {
    char nome[50];
    float precoUnitario;
    int quantidade;
};

// Função para cadastrar um novo produto
void cadastrarProduto(struct Produto produtos[], int *quantidadeProdutos) {
    struct Produto novoProduto;

    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto.nome);

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &novoProduto.precoUnitario);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &novoProduto.quantidade);

    produtos[*quantidadeProdutos] = novoProduto;
    (*quantidadeProdutos)++;
}

// Função para atualizar o estoque de um produto existente
void atualizarEstoque(struct Produto produtos[], int quantidadeProdutos) {
    char nomeProduto[50];
    int quantidade;

    printf("Digite o nome do produto para atualizar o estoque: ");
    scanf("%s", nomeProduto);

    for (int i = 0; i < quantidadeProdutos; i++) {
        if (strcmp(produtos[i].nome, nomeProduto) == 0) {
            printf("Digite a quantidade para atualizar o estoque: ");
            scanf("%d", &quantidade);

            produtos[i].quantidade += quantidade;
            printf("Estoque atualizado com sucesso.\n");
            return;
        }
    }

    printf("Produto não encontrado.\n");
}

// Função para calcular o preço total dos produtos em estoque
float calcularPrecoTotal(struct Produto produtos[], int quantidadeProdutos) {
    float total = 0.0;

    for (int i = 0; i < quantidadeProdutos; i++) {
        total += produtos[i].precoUnitario * produtos[i].quantidade;
    }

    return total;
}

int main() {
    struct Produto produtos[100];
    int quantidadeProdutos = 0; 
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Atualizar Estoque\n");
        printf("3. Calcular Preço Total\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                cadastrarProduto(produtos, &quantidadeProdutos);
                break;
            case '2':
                atualizarEstoque(produtos, quantidadeProdutos);
                break;
            case '3':
                printf("Preço total dos produtos em estoque: %.2f\n", calcularPrecoTotal(produtos, quantidadeProdutos));
                break;
            case '4':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != '4');

    return 0;
}
// bola::nome função(int x)