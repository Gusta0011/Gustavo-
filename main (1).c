
#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    // Solicita o número ao usuário
    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        // Calcula a raiz quadrada do número positivo
        float raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, raizQuadrada);
    } else {
        // Exibe mensagem de número inválido para números negativos
        printf("Número inválido. O número deve ser positivo.\n");
    }

    return 0;
}

