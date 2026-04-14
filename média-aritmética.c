#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética é: %.2f\n", media);

    // esse código foi commitado para o repositório do GitHub
}