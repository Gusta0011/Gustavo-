#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    if(num1 >= num2 && num1 >= num3)
        printf("O maior número é: %.2f\n", num1);
    else if(num2 >= num1 && num2 >= num3)
        printf("O maior número é: %.2f\n", num2);
    else
        printf("O maior número é: %.2f\n", num3);

    return 0;
}

