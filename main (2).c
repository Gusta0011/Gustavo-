#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valorTotal;

    // Mostra o cardápio e solicita o código do produto e a quantidade
    printf("CARDÁPIO\n");
    printf("1 - Cachorro-quente - R$ 4.00\n");
    printf("2 - Hambúrguer - R$ 5.50\n");
    printf("3 - Cheeseburguer - R$ 6.00\n");
    printf("4 - Refrigerante - R$ 3.00\n");
    printf("5 - Suco - R$ 2.50\n");
    printf("Digite o código do produto e a quantidade desejada: ");
    scanf("%d %d", &codigo, &quantidade);

    // Calcula o valor total do pedido com base no código do produto e na quantidade
    switch (codigo) {
        case 1:
            valorTotal = 4.00 * quantidade;
            break;
        case 2:
            valorTotal = 5.50 * quantidade;
            break;
        case 3:
            valorTotal = 6.00 * quantidade;
            break;
        case 4:
            valorTotal = 3.00 * quantidade;
            break;
        case 5:
            valorTotal = 2.50 * quantidade;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 1; // Saída com erro
    }

    // Exibe o valor total a ser pago
    printf("Valor a ser pago: R$ %.2f\n", valorTotal);

    return 0; // Saída sem erro
}

