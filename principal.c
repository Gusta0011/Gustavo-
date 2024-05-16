#include <stdio.h>

int main() {
    int nota;
    
    // Receber a nota do usuário
    printf("Digite a nota (0-100): ");
    scanf("%d", &nota);
    
    // Determinar o conceito correspondente à nota
    if (nota >= 90 && nota <= 100) {
        printf("A\n");
    } else if (nota >= 80 && nota < 90) {
        printf("B\n");
    } else if (nota >= 70 && nota < 80) {
        printf("C\n");
    } else if (nota >= 60 && nota < 70) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    
    return 0;
}
