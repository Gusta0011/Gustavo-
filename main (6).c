#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);

        if(numero < 1 || numero > 10) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while(numero < 1 || numero > 10);

    printf("Tabuada de %d:\n", numero);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

